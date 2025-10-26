// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "ActorTrackingDescriptor.h"
#include "Blueprint/UserWidgetPool.h"
#include "UObject/Object.h"
#include "ActorTrackingHandle.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct ACTORTRACKINGSYSTEM2D_API FActorTrackingHandle
{
	GENERATED_BODY()
	
public:
	FActorTrackingHandle() :Handle(INDEX_NONE){}
	FActorTrackingHandle(const int32 InHandle) : Handle(InHandle){}

	friend uint32 GetTypeHash(const FActorTrackingHandle& InHandle)
	{
		return InHandle.Handle;
	}

	bool IsValid() const
	{
		return Handle != INDEX_NONE;
	}

	void Invalidate()
	{
		Handle = INDEX_NONE;
	}

	bool operator==(const FActorTrackingHandle& Test) const
	{
		return Handle == Test.Handle;
	}

	bool operator!=(const FActorTrackingHandle& Test) const
	{
		return Handle != Test.Handle;
	}

	int32 operator*() const
	{
		return Handle;
	}

private:
	int32 Handle;
};