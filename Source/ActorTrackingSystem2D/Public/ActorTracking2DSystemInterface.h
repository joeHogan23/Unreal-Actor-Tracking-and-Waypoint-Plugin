// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ActorTracking2DSystemInterface.generated.h"

class UActorTracking2DComponent;
// This class does not need to be modified.
UINTERFACE()
class ACTORTRACKINGSYSTEM2D_API UActorTracking2DSystemInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class ACTORTRACKINGSYSTEM2D_API IActorTracking2DSystemInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	virtual UActorTracking2DComponent* GetActorTracking2DComponent() const = 0;
};
