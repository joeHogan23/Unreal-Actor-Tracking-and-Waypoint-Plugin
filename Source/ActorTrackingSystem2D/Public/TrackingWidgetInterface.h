// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "UObject/Interface.h"
#include "TrackingWidgetInterface.generated.h"

struct FGameplayTagContainer;
// This class does not need to be modified.
UINTERFACE()
class ACTORTRACKINGSYSTEM2D_API UTrackingWidgetInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTORTRACKINGSYSTEM2D_API ITrackingWidgetInterface
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintNativeEvent)
	void SetTrackerData(AActor* Tracked, UObject* ContextObject, const FGameplayTagContainer& InContextTags);

	UFUNCTION(BlueprintNativeEvent)
	void TrackerTick(float DeltaTime, const bool IsInViewport, const FVector2D& ScreenPosition);
	
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
	bool CanKillOnTimeRemainingElapsed() const;
	virtual bool CanKillOnTimeRemainingElapsed_Implementation() const { return true; };
};
