// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActorTrackingDescriptor.h"
#include "ActorTrackingHandle.h"
#include "ActorTrackingSpecHandlePair.h"
#include "Subsystems/WorldSubsystem.h"
#include "ActorTracking2DSubsystem.generated.h"

enum class EDataValidationExecs : uint8;
/**
 * 
 */

UCLASS()
class ACTORTRACKINGSYSTEM2D_API UActorTracking2DSubsystem : public UTickableWorldSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void OnWorldBeginPlay(UWorld& InWorld) override;
	virtual void Deinitialize() override;

	virtual void Tick(float DeltaTime) override;
	virtual TStatId GetStatId() const override;

	void SetGlobalVisibility(bool NewVisibility);
	
	template<typename Predicate>
		const FActorTrackingHandle& FindHandleByPredicate(Predicate Pred)
	{
		if(const FActorTrackingSpecHandlePair* SpecPair = Map.FindByPredicate(Pred))
		{
			return SpecPair->GetHandle();
		}
		return {};
	}
	
	template<typename Predicate>
	const FActorTrackingSpec& FindSpecByPredicate(Predicate Pred)
	{
		if(const FActorTrackingSpecHandlePair* SpecPair = Map.FindByPredicate(Pred))
		{
			return SpecPair->GetSpec();
		}
		return {};
	}

	void ForEachSpec(const TFunctionRef<void(const FActorTrackingHandle&, const FActorTrackingSpec&)>& Functor);
	
private:
	void UpdateSpec(float DeltaTime, const FActorTrackingSpec& Spec) const;

public:
	void ClearMapping();
	void ValidateMapping();

	static UActorTracking2DSubsystem* Get(const UObject* WorldContextObject);
	static UActorTracking2DSubsystem* Get(const UWorld* World);

	UFUNCTION(BlueprintCallable, Category="Tracking System 2D")
	const FActorTrackingHandle& AddTracker(AActor* Tracked, UPARAM(meta = (MustImplement ="/Script/ActorTrackingSystem2D.TrackingWidgetInterface")) const TSubclassOf<UUserWidget> TrackingWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor, bool RebuildIfActive);

	UFUNCTION(BlueprintCallable, Category="Tracking System 2D")
	void RemoveFromGlobalMap(const FActorTrackingHandle& Handle);
	
	void RemoveFromGlobalMapByIndex(int32 Index);

	const FActorTrackingSpec& GetSpecFromHandle(const FActorTrackingHandle& Handle) const;

protected:
	UFUNCTION(BlueprintCallable, DisplayName="Add Visibility Tag", Category="Actor Tracking 2D")
	void BP_AddTrackerVisibilityTag(const FGameplayTag Tag);

	UFUNCTION(BlueprintCallable, DisplayName="Remove Visibility Tag", Category="Actor Tracking 2D")
	void BP_RemoveVisibilityTag(const FGameplayTag Tag);

public:
	void NativeAddVisibilityTag(const FGameplayTag& Tag);
	void NativeRemoveVisibilityTag(const FGameplayTag& Tag);
	void CheckSpecVisibilityByTags();

protected:
	virtual const FActorTrackingHandle& CreateSpec(AActor* Tracked, const TSubclassOf<UUserWidget> TrackingWidget, UObject* ContextObject, const FActorTrackingDescriptor&
	                                               Descriptor, bool RebuildIfActive);

	virtual void InitializeWidget(AActor* TrackedActor, UUserWidget* TrackedWidget, UObject* ContextObject, const FActorTrackingDescriptor& Descriptor);
	
private:
	
	const FActorTrackingHandle& GenerateNewHandle(const FActorTrackingSpec& Entry);
	
	UPROPERTY()
	FGameplayTagContainer VisibilityTags;
	
	UPROPERTY()
	TArray<FActorTrackingSpecHandlePair> Map;

	float ScreenEdgeMarginPercent = 0.5f;
	bool bWidgetPoolingEnabled = true;
	
	UPROPERTY()
	FUserWidgetPool WidgetPool;
};