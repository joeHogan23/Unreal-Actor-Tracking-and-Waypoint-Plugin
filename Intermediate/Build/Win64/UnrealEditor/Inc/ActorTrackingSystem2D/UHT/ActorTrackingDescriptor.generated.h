// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTrackingDescriptor.h"

#ifdef ACTORTRACKINGSYSTEM2D_ActorTrackingDescriptor_generated_h
#error "ActorTrackingDescriptor.generated.h already included, missing '#pragma once' in ActorTrackingDescriptor.h"
#endif
#define ACTORTRACKINGSYSTEM2D_ActorTrackingDescriptor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FActorTrackingDescriptor ******************************************
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics; \
	ACTORTRACKINGSYSTEM2D_API static class UScriptStruct* StaticStruct();


struct FActorTrackingDescriptor;
// ********** End ScriptStruct FActorTrackingDescriptor ********************************************

// ********** Begin ScriptStruct FActorTrackingSpec ************************************************
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h_86_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FActorTrackingSpec_Statics; \
	ACTORTRACKINGSYSTEM2D_API static class UScriptStruct* StaticStruct();


struct FActorTrackingSpec;
// ********** End ScriptStruct FActorTrackingSpec **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h

// ********** Begin Enum ETrackingType *************************************************************
#define FOREACH_ENUM_ETRACKINGTYPE(op) \
	op(ETrackingType::Actor) \
	op(ETrackingType::Component) \
	op(ETrackingType::Socket) 

enum class ETrackingType : uint8;
template<> struct TIsUEnumClass<ETrackingType> { enum { Value = true }; };
template<> ACTORTRACKINGSYSTEM2D_API UEnum* StaticEnum<ETrackingType>();
// ********** End Enum ETrackingType ***************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
