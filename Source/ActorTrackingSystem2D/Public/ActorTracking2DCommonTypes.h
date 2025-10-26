// Copyright (c) 2024 That Strange Creature & Joseph Sierejko. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ActorTracking2DCommonTypes.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EDataValidationExecs : uint8
{
	Valid,
	NotValid
};