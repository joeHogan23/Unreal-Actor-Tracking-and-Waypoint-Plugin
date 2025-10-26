// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTracking2DCommonTypes.h"

#ifdef ACTORTRACKINGSYSTEM2D_ActorTracking2DCommonTypes_generated_h
#error "ActorTracking2DCommonTypes.generated.h already included, missing '#pragma once' in ActorTracking2DCommonTypes.h"
#endif
#define ACTORTRACKINGSYSTEM2D_ActorTracking2DCommonTypes_generated_h

#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DCommonTypes_h

// ********** Begin Enum EDataValidationExecs ******************************************************
#define FOREACH_ENUM_EDATAVALIDATIONEXECS(op) \
	op(EDataValidationExecs::Valid) \
	op(EDataValidationExecs::NotValid) 

enum class EDataValidationExecs : uint8;
template<> struct TIsUEnumClass<EDataValidationExecs> { enum { Value = true }; };
template<> ACTORTRACKINGSYSTEM2D_API UEnum* StaticEnum<EDataValidationExecs>();
// ********** End Enum EDataValidationExecs ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
