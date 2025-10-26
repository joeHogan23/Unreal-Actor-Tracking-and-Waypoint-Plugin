// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Blueprint/UserWidget.h"
#include "ActorTrackingDescriptor.generated.h"
/**
 * 
 */

namespace GlobalActorTracking
{
	static bool GIsVisible = true;
}

USTRUCT(BlueprintType)
struct FActorTrackingDescriptor
{
	GENERATED_BODY()

	const FName& GetId() const { return TrackedUniqueId; }
	const FName& GetSocketName() const { return SocketName; }
	const FVector2D& GetPivotCoords() const { return TrackerPivotCoords; }
	const FGameplayTagContainer& GetContextTags() const	{ return Contexts; }

	const FVector& GetLocationOffset() const { return LocationOffset; }
	const FVector& GetWorldLocationScalar() const { return WorldLocationScalar; }

	const FGameplayTagContainer& GetVisibilityTags() const { return VisibilityTags; }
	
	int32 GetZOrder() const { return ZOrder; }
	
	TOptional<float> GetDrawDistanceRange() const { return DrawDistanceRange > 0 ? DrawDistanceRange : TOptional<float>(); }
	float GetDrawDistanceFallOffRate() const { return DrawDistanceFallOffRate; }
	float GetLifeSpan() const { return LifeSpan; }

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess="true"))
	FName TrackedUniqueId = FName("DefaultTracker");

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess="true"))
	FName SocketName = NAME_None;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess="true"))
	FVector2D TrackerPivotCoords = { .5f, .5f};

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess="true"))
	FGameplayTagContainer Contexts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess="true"))
	FGameplayTagContainer VisibilityTags;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, meta=(AllowPrivateAccess="true"))
	FVector LocationOffset = FVector::Zero();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, meta=(AllowPrivateAccess="true"))
	FVector WorldLocationScalar = FVector::One();
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, meta=(AllowPrivateAccess="true"))
	float ZOrder = 0;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, meta=(AllowPrivateAccess="true"))
	float DrawDistanceRange = -1.f;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, meta=(EditCondition="DrawDistanceRange > 0", AllowPrivateAccess="true"))
	float DrawDistanceFallOffRate = 2.f;

	//If -1, Tracker has no lifespan
	UPROPERTY(BlueprintReadWrite, EditAnywhere, AdvancedDisplay, meta=(AllowPrivateAccess="true"))
	float LifeSpan = -1.f;
};

UENUM(BlueprintType)
enum class ETrackingType : uint8
{
	Actor,
	Component,
	Socket
};

USTRUCT(BlueprintType)
struct FActorTrackingSpec
{
	GENERATED_BODY()

	friend class UActorTracking2DSubsystem;
	friend class FActorTracking2DApplication;
	friend struct FActorTrackingSpecHandlePair;
	
	FActorTrackingSpec() {};
	FActorTrackingSpec(
		AActor* InTrackedActor,
		UUserWidget* InTrackerWidget,
		UObject* InContextObject,
		const FActorTrackingDescriptor& InDescriptor,
		bool RebuildIfActive = true);

	bool IsValid() const;

	AActor* GetTrackedActor() const { return TrackedActor.Get(); }
	USceneComponent* GetTrackedComponent() const { return TrackedComponent.Get(); }

	UUserWidget* GetTrackingWidget() const { return TrackingWidget.Get(); }
	UObject* GetContextObject() const { return ContextObject.Get(); }

	const FGameplayTagContainer& GetContexts() const { return Descriptor.GetContextTags(); }

	FActorTrackingDescriptor GetDescriptor() const { return Descriptor; }
	
	bool RebuildIfActive() const { return bRebuildIfActive; }
	
	bool operator==(const FActorTrackingSpec& Other) const
	{
		return TrackedActor == Other.TrackedActor && Descriptor.GetId() == Other.Descriptor.GetId();
	}
	
	bool ShouldKill() const;
	
	FVector GetWorldLocation() const;
	
	bool IsWidgetVisible() const;

	FVector2D GetWidgetSize() const;

private:
	
	void UpdateVisibilityByTag(const FGameplayTag& NewVisibilityTag) const;
	
	void UpdateLifeSpan(const float DeltaTime)
	{
		if(Descriptor.GetLifeSpan() > 0)
		{
			CurrentTimeRemaining -= DeltaTime;	
		}
	}
	
	void RemoveFromViewport() const;
	
	void CheckForAttachData();
	
	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	TWeakObjectPtr<AActor> TrackedActor = nullptr;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	TWeakObjectPtr<USceneComponent> TrackedComponent = nullptr;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	TWeakObjectPtr<UUserWidget> TrackingWidget = nullptr;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	TWeakObjectPtr<UObject> ContextObject = nullptr;
	
	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	FActorTrackingDescriptor Descriptor;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	bool bRebuildIfActive = true;

	UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess="true"))
	ETrackingType TrackingType = ETrackingType::Actor;
	
	float CurrentTimeRemaining = -1.f;
};
