// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "ActorTracking2DSubsystem.h"

#include "ActorTracking2DCommonTypes.h"
#include "ActorTracking2DProjectSettings.h"
#include "ActorTrackingHandle.h"
#include "ActorTrackingSpecHandlePair.h"
#include "ActorTrackingSystem2D.h"
#include "ActorTrackingSystem2DGlobals.h"
#include "TrackingWidgetInterface.h"
#include "Blueprint/WidgetBlueprintLibrary.h"

namespace GlobalActorTracking
{
	static int32 GHandleID = 0;
}

void UActorTracking2DSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	ScreenEdgeMarginPercent = UActorTracking2DProjectSettings::GetScreenEdgeMarginPercent() * .01f;
	bWidgetPoolingEnabled = UActorTracking2DProjectSettings::IsWidgetPoolingEnabled();
}

void UActorTracking2DSubsystem::OnWorldBeginPlay(UWorld& InWorld)
{
	Super::OnWorldBeginPlay(InWorld);
	WidgetPool.SetWorld(GetWorld());
}

void UActorTracking2DSubsystem::Deinitialize()
{
	Super::Deinitialize();
	WidgetPool.ReleaseAll(true);
}


void UActorTracking2DSubsystem::Tick(const float DeltaTime)
{
	for(int32 i = Map.Num() - 1; i >= 0; --i)
	{
		FActorTrackingSpecHandlePair& SpecHandlePair = Map[i];

		//Should run at the beginning of next frame, so it's not killed a frame early if time hasn't elapsed
		if(SpecHandlePair.GetSpec().ShouldKill())
		{
			RemoveFromGlobalMapByIndex(i);
			continue;
		}
		
		UpdateSpec(DeltaTime, SpecHandlePair.GetSpec());
		
		SpecHandlePair.Spec.UpdateLifeSpan(DeltaTime);
	}
}

TStatId UActorTracking2DSubsystem::GetStatId() const
{
	RETURN_QUICK_DECLARE_CYCLE_STAT(UActorTracking2DSubsystem, STATGROUP_Tickables);
}

void UActorTracking2DSubsystem::SetGlobalVisibility(const bool NewVisibility)
{
	GlobalActorTracking::GIsVisible = NewVisibility;
}

UActorTracking2DSubsystem* UActorTracking2DSubsystem::Get(const UObject* WorldContextObject)
{
	return IsValid(WorldContextObject) ? Get(WorldContextObject->GetWorld()) : nullptr;
}

UActorTracking2DSubsystem* UActorTracking2DSubsystem::Get(const UWorld* World)
{
	return IsValid(World) ? World->GetSubsystem<UActorTracking2DSubsystem>() : nullptr;
}

const FActorTrackingHandle& UActorTracking2DSubsystem::AddTracker(AActor* Tracked, const TSubclassOf<UUserWidget> TrackingWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor, bool RebuildIfActive)
{
	if(!IsValid(Tracked) || !IsValid(TrackingWidget))
	{
		static FActorTrackingHandle NullHandle = {};
		return NullHandle;
	}

	if(FActorTrackingSpecHandlePair* FoundSpec = Map.FindByPredicate([&Tracked, &Descriptor](const FActorTrackingSpecHandlePair& SpecPair)
	{
		return SpecPair.GetSpec().GetTrackedActor() == Tracked && Descriptor.GetId() == SpecPair.GetSpec().GetDescriptor().GetId();
	}))
	{
		if(!RebuildIfActive)
		{
			UE_LOG(LogActorTrackingSystem2D, Verbose, TEXT("UActorTracking2DSubsystem::AddTracker | Attempted to rebuild Found widget that is marked DON'T rebuild"))
			return FoundSpec->Handle;
		}
		FoundSpec->Handle.Invalidate();
		Map.Remove(*FoundSpec);

		return CreateSpec(Tracked, TrackingWidget, ContextObject, Descriptor, RebuildIfActive);
	};
	
	return CreateSpec(Tracked, TrackingWidget, ContextObject, Descriptor, RebuildIfActive);
}

const FActorTrackingSpec& UActorTracking2DSubsystem::GetSpecFromHandle(const FActorTrackingHandle& Handle) const
{
	if(const FActorTrackingSpecHandlePair* HandleSpecPair = Map.FindByPredicate([&Handle](const FActorTrackingSpecHandlePair& Pair) { return Pair == Handle; }))
	{
		return HandleSpecPair->GetSpec();
	}

	static FActorTrackingSpec EmptySpec = FActorTrackingSpec(); 
	return EmptySpec;
}

void UActorTracking2DSubsystem::BP_AddTrackerVisibilityTag(const FGameplayTag Tag)
{
	NativeAddVisibilityTag(Tag);
}

void UActorTracking2DSubsystem::BP_RemoveVisibilityTag(const FGameplayTag Tag)
{
	NativeRemoveVisibilityTag(Tag);
}

void UActorTracking2DSubsystem::NativeAddVisibilityTag(const FGameplayTag& Tag)
{
	VisibilityTags.AddTag(Tag);
}

void UActorTracking2DSubsystem::NativeRemoveVisibilityTag(const FGameplayTag& Tag)
{
	VisibilityTags.RemoveTag(Tag);
}


const FActorTrackingHandle& UActorTracking2DSubsystem::CreateSpec(AActor* Tracked, const TSubclassOf<UUserWidget> TrackingWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor, bool RebuildIfActive)
{
	UUserWidget* NewWidget = nullptr;
	if(bWidgetPoolingEnabled)
	{
		check(WidgetPool.IsInitialized())
		NewWidget = WidgetPool.GetOrCreateInstance(TrackingWidget);
	}
	else
	{
		NewWidget = UWidgetBlueprintLibrary::Create(GetWorld(), TrackingWidget,nullptr);
	}
	
	if(IsValid(NewWidget))
	{
		InitializeWidget(Tracked, NewWidget, ContextObject, Descriptor);
		return GenerateNewHandle({Tracked, NewWidget, ContextObject, Descriptor, RebuildIfActive});
	}

	static FActorTrackingHandle NullHandle = {};
	return NullHandle;
}

void UActorTracking2DSubsystem::InitializeWidget(AActor* TrackedActor, UUserWidget* TrackedWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor)
{
	ITrackingWidgetInterface::Execute_SetTrackerData(TrackedWidget, TrackedActor, ContextObject, Descriptor.GetContextTags());
	TrackedWidget->AddToViewport();
}


void UActorTracking2DSubsystem::ForEachSpec(const TFunctionRef<void(const FActorTrackingHandle&, const FActorTrackingSpec&)>& Functor)
{
	for(int32 i = Map.Num() - 1; i >= 0; --i)
	{
		Functor(Map[i].GetHandle(), Map[i].GetSpec());
	}
}

void UActorTracking2DSubsystem::UpdateSpec(float DeltaTime, const FActorTrackingSpec& Spec) const
{
	if(GetWorld())
	{
		FVector2D ScreenPosition = FVector2D::Zero();
		float Angle = 0.f;
		bool IsInViewport = true;

		Spec.UpdateVisibilityByTag(VisibilityTags.Last());
		
		if(UActorTrackingSystem2DGlobals::ProjectWorldToScreenOrScreenEdge(GetWorld()->GetFirstPlayerController(), Spec.GetWorldLocation(), ScreenEdgeMarginPercent, ScreenPosition, Angle, IsInViewport))
		{
			Spec.GetTrackingWidget()->SetPositionInViewport(ScreenPosition - (Spec.GetWidgetSize() * Spec.GetDescriptor().GetPivotCoords()));
			ITrackingWidgetInterface::Execute_TrackerTick(Spec.GetTrackingWidget(), DeltaTime, IsInViewport, ScreenPosition);
		}
	}
}

void UActorTracking2DSubsystem::RemoveFromGlobalMap(const FActorTrackingHandle& Handle)
{
	//Find Index by handle and remove
	RemoveFromGlobalMapByIndex(Map.IndexOfByPredicate([Handle](const FActorTrackingSpecHandlePair& Pair){	return Pair == Handle;	}));
}

void UActorTracking2DSubsystem::RemoveFromGlobalMapByIndex(const int32 Index)
{
	if(Map.IsValidIndex(Index))
	{
		FActorTrackingSpecHandlePair& SpecPair = Map[Index];

		if(bWidgetPoolingEnabled)
			WidgetPool.Release(SpecPair.GetSpec().GetTrackingWidget());
		
		SpecPair.GetSpec().RemoveFromViewport();
		SpecPair.Handle.Invalidate();
		Map.RemoveAt(Index);
	}
}


void UActorTracking2DSubsystem::ClearMapping()
{
	for(int32 i = Map.Num(); i >= 0; --i)
	{
		RemoveFromGlobalMapByIndex(i);
	}
}

void UActorTracking2DSubsystem::ValidateMapping()
{
	for(int32 i = Map.Num(); i >= 0; --i)
	{
		if(!Map[i].GetHandle().IsValid() || !Map[i].GetSpec().IsValid())
		{
			RemoveFromGlobalMapByIndex(i);
		}
	}
}

const FActorTrackingHandle& UActorTracking2DSubsystem::GenerateNewHandle(const FActorTrackingSpec& Entry)
{
	if(Entry.IsValid())
	{
		static FActorTrackingHandle NewHandle(GlobalActorTracking::GHandleID++);
		Map.Add({NewHandle, Entry});
		return NewHandle;
	}
	
	static FActorTrackingHandle NullHandle = FActorTrackingHandle();
	return NullHandle;
}
