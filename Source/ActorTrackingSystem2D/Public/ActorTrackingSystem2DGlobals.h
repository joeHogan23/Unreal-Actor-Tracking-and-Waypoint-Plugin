// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActorTracking2DCommonTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ActorTrackingSystem2DGlobals.generated.h"

struct FGameplayTag;
struct FActorTrackingSpec;
struct FActorTrackingDescriptor;
class UUserWidget;
struct FActorTrackingHandle;
class UActorTracking2DComponent;
class USceneCaptureComponent2D;
class UWidget;
/**
 * 
 */
UCLASS()
class ACTORTRACKINGSYSTEM2D_API UActorTrackingSystem2DGlobals : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, Category="Tracking System 2D")
	static bool ProjectWorldToScreenOrScreenEdge(APlayerController* Controller, const FVector& WorldPos, const float EdgeOffsetPercent, FVector2D& OutScreenPos, float& OutAngle, bool& IsInViewport);

	UFUNCTION(BlueprintPure, Category="Tracking System 2D")
	static UActorTracking2DComponent* GetTracking2DComponentFromActor(const AActor* Actor);
	
	UFUNCTION(BlueprintPure, Category="Tracking System 2D")
	static bool ProjectWorldToCapturedScreen(USceneCaptureComponent2D* CaptureComponent, const FVector& WorldPos, const UWidget* ProjectionWidget, FVector2D& OutScreenPos, const bool ShouldCalculateOutsideProjectionView = false);

	static bool GetSocketOwningComponent(const AActor* Actor, const FName& SocketName,  OUT USceneComponent*& OwningComponent);

	UFUNCTION(BlueprintCallable, Category="Tracking System 2D")
	static void SetGlobalVisibility(const bool NewVisibility);

	UFUNCTION(BlueprintCallable, Category="Tracking System 2D")
	static const FActorTrackingHandle& AddTracker(AActor* Tracked, UPARAM(meta = (MustImplement ="/Script/ActorTrackingSystem2D.TrackingWidgetInterface")) const TSubclassOf<UUserWidget> TrackingWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor, bool RebuildIfActive);

	UFUNCTION(BlueprintCallable, DisplayName="Get Tracker Spec From Handle", Category="Tracking System 2D", meta=(WorldContext="WorldContextObject",ExpandEnumAsExecs="ReturnValue"))
	EDataValidationExecs GetTrackerSpecFromHandle(UObject* WorldContextObject, const FActorTrackingHandle& Handle, FActorTrackingSpec& OutSpec);
	
	
	UFUNCTION(BlueprintCallable, Category="Tracking System 2D", meta=(WorldContext="WorldContextObject"))
	static void RemoveTracker(const UObject* WorldContextObject, const FActorTrackingHandle& Handle);
	
	UFUNCTION(BlueprintCallable, DisplayName="Add Tracker Visibility Tag", Category="Actor Tracking 2D", meta=(WorldContext="WorldContextObject"))
	void BP_AddTrackerVisibilityTag(const UObject* WorldContextObject, const FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, DisplayName="Remove Tracker Visibility Tag", Category="Actor Tracking 2D", meta=(WorldContext="WorldContextObject"))
	void BP_RemoveTrackerVisibilityTag(const UObject* WorldContextObject, const FGameplayTag Tag);

	
private:
	UFUNCTION(BlueprintCallable, DisplayName="Is Valid", Category="Tracking System 2D", meta=(ExpandBoolAsExecs="ReturnValue"))
	static bool IsTrackingHandleValid_Execs(const FActorTrackingHandle& Handle);

	UFUNCTION(BlueprintPure, DisplayName="Is Valid", Category="Tracking System 2D")
	static bool IsTrackingHandleValid(const FActorTrackingHandle& Handle);
};
