// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActorTrackingHandle.h"
#include "ActorTrackingSpecHandlePair.generated.h"
/**
 * 
 */

USTRUCT()
struct FActorTrackingSpecHandlePair
{
	GENERATED_BODY()

	friend class UActorTracking2DSubsystem;
	
	FActorTrackingSpecHandlePair() { checkf(false, TEXT("Do not use, Use FActorTrackingSpecHandlePair(const FActorTrackingHandle&, const FActorTrackingSpec&)")) }
	FActorTrackingSpecHandlePair(const FActorTrackingHandle& InHandle, const FActorTrackingSpec& InSpec) : Handle(InHandle), Spec(InSpec){}
	
public:
	const FActorTrackingHandle& GetHandle() const { return Handle; }
	const FActorTrackingSpec& GetSpec() const { return Spec; }
	
	bool operator==(const FActorTrackingSpecHandlePair& Other) const
	{
		return Handle == Other.Handle;
	}

	bool operator==(const int32& OtherHandle) const
	{
		return Handle == OtherHandle;
	}

	bool operator==(const FActorTrackingHandle& OtherHandle) const
	{
		return Handle == OtherHandle;
	}

private:
	UPROPERTY()
	FActorTrackingHandle Handle;

	UPROPERTY()
	FActorTrackingSpec Spec;
};