// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.


#include "ActorTrackingSystem2DGlobals.h"

#include "ActorTracking2DSubsystem.h"
#include "ActorTracking2DSystemInterface.h"
#include "ActorTrackingHandle.h"
#include "Blueprint/WidgetLayoutLibrary.h"
#include "Camera/PlayerCameraManager.h"
#include "GameFramework/PlayerController.h"

bool UActorTrackingSystem2DGlobals::ProjectWorldToScreenOrScreenEdge(APlayerController* Controller, const FVector& WorldPos, const float EdgeOffsetPercent, FVector2D& OutScreenPos, float& OutAngle, bool& IsInViewport)
{
if(!IsValid(Controller)) return false;
	if(!IsValid(Controller->PlayerCameraManager))	return false;
	
	OutAngle = 0;
	IsInViewport = false;
	
	//Camera Params
	const FVector CamLocation = Controller->PlayerCameraManager->GetCameraLocation();
	const FVector CamForward = Controller->PlayerCameraManager->GetActorForwardVector();
	const FVector Direction = (WorldPos -  CamLocation).GetSafeNormal();

	//Viewport Params
	const FVector2D ViewportSize = UWidgetLayoutLibrary::GetViewportSize(Controller);
	const FVector2D ViewportCenter = ViewportSize * .5f;

	const bool LocationInverted = FVector::DotProduct(CamForward, Direction) < 0;

	const float Distance = (WorldPos - CamLocation).Size();
	FVector ParallelLocation = WorldPos;

	// If behind camera, offset forward to avoid flipped projection
	if(LocationInverted)
	{
		ParallelLocation = WorldPos + (CamForward * (Distance + 1000.f));
	}

	//Project to Screen Space
	Controller->ProjectWorldLocationToScreen(ParallelLocation, OutScreenPos);

	// Edge Clamping Bounds
	FVector2D Bounds = (ViewportSize - (ViewportSize * EdgeOffsetPercent)) * .5f;

	//Viewport Edge detection - if the position is on-screen, return true with the current OutScreenPos
	if(	OutScreenPos.X > Bounds.X &&
		OutScreenPos.X < (ViewportSize.X - Bounds.X) &&
		OutScreenPos.Y > Bounds.Y &&
		OutScreenPos.Y < (ViewportSize.Y - Bounds.Y) &&
		!LocationInverted)
		{
			IsInViewport = true;
			return true;
		}

	OutScreenPos -= ViewportCenter;

	//Calculate angle from center to Projected Point
	float AngleRadians = FMath::Atan2(OutScreenPos.Y, OutScreenPos.X);
	AngleRadians -= FMath::DegreesToRadians(90.f);
	OutAngle = FMath::RadiansToDegrees(AngleRadians) + 180.f;

	// Calculate trigonometric components for determining screen edge clamping direction.
	// AngleRadians is the angle from the screen center to the off-screen target, rotated so 0° points up.
	// Cos and Sin represent the direction vector components in screen space.
	// We negate Sin to align with screen-space Y-axis (positive Y is down in screen coordinates).
	// Cotangent (Cot = Cos / Sin) gives the slope of the line from center to the off-screen point,
	// which we use to determine where that line intersects the screen edge (top/bottom or left/right).
	const float Cos = FMath::Cos(AngleRadians),
				Sin = -FMath::Sin(AngleRadians),
				Cot = Cos / Sin;
	
	Bounds = ViewportCenter * EdgeOffsetPercent;
	
	//Clamp to vertical edge based on cosine
	if(Cos > 0)
	{
		OutScreenPos = { Bounds.Y / Cot, Bounds.Y };
	}
	else
	{
		OutScreenPos = {-Bounds.Y / Cot, -Bounds.Y };
	}

	//Clamp to horizontal edge if needed
	if(OutScreenPos.X > Bounds.X)
	{
		OutScreenPos = { Bounds.X, Bounds.X * Cot };
	}
	else if(OutScreenPos.X < -Bounds.X)
	{
		OutScreenPos = { -Bounds.X, -Bounds.X * Cot };
	}

	//Recenter to Screen Space
	OutScreenPos += ViewportCenter;
	return true;
}

UActorTracking2DComponent* UActorTrackingSystem2DGlobals::GetTracking2DComponentFromActor(const AActor* Actor)
{
	if(const IActorTracking2DSystemInterface* ActorTracking2DImplementable = Cast<IActorTracking2DSystemInterface>(Actor))
	{
		return ActorTracking2DImplementable->GetActorTracking2DComponent();
	}
	return nullptr;
}

bool UActorTrackingSystem2DGlobals::ProjectWorldToCapturedScreen(USceneCaptureComponent2D* CaptureComponent, const FVector& WorldPos, const UWidget* ProjectionWidget, FVector2D& OutScreenPos, const bool ShouldCalculateOutsideProjectionView)
{
	//TODO
	return false;
}

bool UActorTrackingSystem2DGlobals::GetSocketOwningComponent(const AActor* Actor, const FName& SocketName, USceneComponent*& OwningComponent)
{
	if(IsValid(Actor))
	{
		USceneComponent* RootComponent = Actor->GetRootComponent();
		if(SocketName.IsNone())
		{
			if(IsValid(Actor->GetRootComponent()))
			{
				OwningComponent = RootComponent;
				return true;
			}
			return false;
		}

		if(RootComponent->DoesSocketExist(SocketName))
		{
			OwningComponent = RootComponent;
			return true;
		}
		
		TArray<USceneComponent*> ChildComponents;
		RootComponent->GetChildrenComponents(true, ChildComponents);
		
		for(USceneComponent* ChildComp : ChildComponents)
		{
			if(ChildComp->DoesSocketExist(SocketName))
			{
				OwningComponent = ChildComp;
				return true;
			}
		}
	}
	return false;
}

void UActorTrackingSystem2DGlobals::SetGlobalVisibility(const bool NewVisibility)
{
	GlobalActorTracking::GIsVisible = NewVisibility;
}

const FActorTrackingHandle& UActorTrackingSystem2DGlobals::AddTracker(AActor* Tracked, const TSubclassOf<UUserWidget> TrackingWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor, bool RebuildIfActive)
{
	if(UActorTracking2DSubsystem* Tracking2DSubsystem = UActorTracking2DSubsystem::Get(Tracked))
	{
		return Tracking2DSubsystem->AddTracker(Tracked, TrackingWidget, ContextObject, Descriptor, RebuildIfActive);
	}
	static const FActorTrackingHandle& NullHandle = {};
	return NullHandle;
}

EDataValidationExecs UActorTrackingSystem2DGlobals::GetTrackerSpecFromHandle(UObject* WorldContextObject, const FActorTrackingHandle& Handle, FActorTrackingSpec& OutSpec)
{
	if(UActorTracking2DSubsystem* Tracking2DSubsystem = UActorTracking2DSubsystem::Get(WorldContextObject))
	{
		OutSpec = Tracking2DSubsystem->GetSpecFromHandle(Handle);
		return OutSpec.IsValid() ? EDataValidationExecs::Valid : EDataValidationExecs::NotValid;	
	}
	return EDataValidationExecs::NotValid;
}

void UActorTrackingSystem2DGlobals::RemoveTracker(const UObject* WorldContextObject, const FActorTrackingHandle& Handle)
{
	if(UActorTracking2DSubsystem* Tracking2DSubsystem = UActorTracking2DSubsystem::Get(WorldContextObject))
	{
		Tracking2DSubsystem->RemoveFromGlobalMap(Handle);
	}
}

void UActorTrackingSystem2DGlobals::BP_AddTrackerVisibilityTag(const UObject* WorldContextObject, const FGameplayTag Tag)
{
	if(UActorTracking2DSubsystem* Tracking2DSubsystem = UActorTracking2DSubsystem::Get(WorldContextObject))
	{
		Tracking2DSubsystem->NativeAddVisibilityTag(Tag);
	}
}

void UActorTrackingSystem2DGlobals::BP_RemoveTrackerVisibilityTag(const UObject* WorldContextObject, const FGameplayTag Tag)
{
	if(UActorTracking2DSubsystem* Tracking2DSubsystem = UActorTracking2DSubsystem::Get(WorldContextObject))
	{
		Tracking2DSubsystem->NativeRemoveVisibilityTag(Tag);
	}
}


bool UActorTrackingSystem2DGlobals::IsTrackingHandleValid_Execs(const FActorTrackingHandle& Handle)
{
	return Handle.IsValid();
}

bool UActorTrackingSystem2DGlobals::IsTrackingHandleValid(const FActorTrackingHandle& Handle)
{
	return Handle.IsValid();
}
