// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTracking2DSubsystem.h"

#ifdef ACTORTRACKINGSYSTEM2D_ActorTracking2DSubsystem_generated_h
#error "ActorTracking2DSubsystem.generated.h already included, missing '#pragma once' in ActorTracking2DSubsystem.h"
#endif
#define ACTORTRACKINGSYSTEM2D_ActorTracking2DSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
class UUserWidget;
struct FActorTrackingDescriptor;
struct FActorTrackingHandle;
struct FGameplayTag;

// ********** Begin Class UActorTracking2DSubsystem ************************************************
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBP_RemoveVisibilityTag); \
	DECLARE_FUNCTION(execBP_AddTrackerVisibilityTag); \
	DECLARE_FUNCTION(execRemoveFromGlobalMap); \
	DECLARE_FUNCTION(execAddTracker);


ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSubsystem_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTracking2DSubsystem(); \
	friend struct Z_Construct_UClass_UActorTracking2DSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorTracking2DSubsystem, UTickableWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorTrackingSystem2D"), Z_Construct_UClass_UActorTracking2DSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UActorTracking2DSubsystem)


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTracking2DSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorTracking2DSubsystem(UActorTracking2DSubsystem&&) = delete; \
	UActorTracking2DSubsystem(const UActorTracking2DSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTracking2DSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTracking2DSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorTracking2DSubsystem) \
	NO_API virtual ~UActorTracking2DSubsystem();


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_17_PROLOG
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_INCLASS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorTracking2DSubsystem;

// ********** End Class UActorTracking2DSubsystem **************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
