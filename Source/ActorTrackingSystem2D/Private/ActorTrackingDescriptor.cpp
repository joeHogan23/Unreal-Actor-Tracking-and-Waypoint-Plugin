// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "ActorTrackingDescriptor.h"

#include "ActorTrackingSystem2DGlobals.h"

FActorTrackingSpec::FActorTrackingSpec(
	AActor* InTrackedActor,
	UUserWidget* InTrackerWidget,
	UObject* InContextObject,
	const FActorTrackingDescriptor& InDescriptor,
	bool RebuildIfActive) :
	TrackedActor(InTrackedActor),
	TrackingWidget(InTrackerWidget),
	ContextObject(InContextObject),
	Descriptor(InDescriptor),
	bRebuildIfActive(RebuildIfActive)
{
	CheckForAttachData();
}

bool FActorTrackingSpec::IsValid() const
{
	return TrackedActor.IsValid() && TrackingWidget.IsValid();
}

bool FActorTrackingSpec::ShouldKill() const
{
	if(Descriptor.GetLifeSpan() > 0)
	{
		if(CurrentTimeRemaining <= 0)
			return true;
	}

	return !IsValid();
}

FVector FActorTrackingSpec::GetWorldLocation() const
{
	switch(TrackingType)
	{
	case ETrackingType::Component:
		return TrackedComponent.IsValid(false, true) ? GetTrackedComponent()->GetComponentLocation() * Descriptor.GetWorldLocationScalar() + Descriptor.GetLocationOffset() : FVector::Zero();

	case ETrackingType::Socket:
		if(TrackedComponent.IsValid(false, true) && TrackedComponent->DoesSocketExist(Descriptor.GetSocketName()))
		{
			return TrackedComponent->GetSocketLocation(Descriptor.GetSocketName()) * Descriptor.GetWorldLocationScalar() + Descriptor.GetLocationOffset();
		}
		
	case ETrackingType::Actor:
		return	IsValid() ? GetTrackedActor()->GetActorLocation() * Descriptor.GetWorldLocationScalar() + Descriptor.GetLocationOffset() : FVector::Zero();
	}
	
	return FVector::Zero();
}

bool FActorTrackingSpec::IsWidgetVisible() const
{
	return IsValid() && GetTrackingWidget()->GetVisibility() == ESlateVisibility::SelfHitTestInvisible;
}

FVector2D FActorTrackingSpec::GetWidgetSize() const
{
	return TrackingWidget.IsValid(false, true) ?
			TrackingWidget->GetPaintSpaceGeometry().GetAbsoluteSize() : FVector2D::Zero();
}

void FActorTrackingSpec::UpdateVisibilityByTag(const FGameplayTag& NewVisibilityTag) const
{
	if(!GlobalActorTracking::GIsVisible)
	{
		if(IsWidgetVisible())
		{
			TrackingWidget->SetVisibility(ESlateVisibility::Hidden);
		}
		return;
	}
	if(!Descriptor.GetVisibilityTags().IsEmpty())
	{
		if(IsValid())
		{
			const ESlateVisibility NewVisibility = Descriptor.GetVisibilityTags().HasTagExact(NewVisibilityTag) ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Hidden;
			if(TrackingWidget->GetVisibility() != NewVisibility)
			{
				TrackingWidget->SetVisibility(NewVisibility);
			}
		}
	}
}

void FActorTrackingSpec::RemoveFromViewport() const
{
	if(TrackingWidget.IsValid() && TrackingWidget->IsInViewport())
	{
		TrackingWidget->RemoveFromParent();
	}
}

void FActorTrackingSpec::CheckForAttachData()
{
	if(TrackedActor.IsValid())
	{
		if(USceneComponent* SocketComp; UActorTrackingSystem2DGlobals::GetSocketOwningComponent(TrackedActor.Get(), Descriptor.GetSocketName(), SocketComp))
		{
			TrackedComponent = SocketComp;
			TrackingType = ETrackingType::Socket;
			return;
		}

		if(USceneComponent* Comp = Cast<USceneComponent>(TrackedActor->FindComponentByTag(USceneComponent::StaticClass(), Descriptor.GetSocketName())))
		{
			TrackedComponent = Comp;
			TrackingType = ETrackingType::Component;
			return;
		}
		
		TrackingType = ETrackingType::Actor;
	}
}
