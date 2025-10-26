// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTrackingSystem2DGlobals.h"

#ifdef ACTORTRACKINGSYSTEM2D_ActorTrackingSystem2DGlobals_generated_h
#error "ActorTrackingSystem2DGlobals.generated.h already included, missing '#pragma once' in ActorTrackingSystem2DGlobals.h"
#endif
#define ACTORTRACKINGSYSTEM2D_ActorTrackingSystem2DGlobals_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class APlayerController;
class UActorTracking2DComponent;
class UObject;
class USceneCaptureComponent2D;
class UUserWidget;
class UWidget;
enum class EDataValidationExecs : uint8;
struct FActorTrackingDescriptor;
struct FActorTrackingHandle;
struct FActorTrackingSpec;
struct FGameplayTag;

// ********** Begin Class UActorTrackingSystem2DGlobals ********************************************
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsTrackingHandleValid); \
	DECLARE_FUNCTION(execIsTrackingHandleValid_Execs); \
	DECLARE_FUNCTION(execBP_RemoveTrackerVisibilityTag); \
	DECLARE_FUNCTION(execBP_AddTrackerVisibilityTag); \
	DECLARE_FUNCTION(execRemoveTracker); \
	DECLARE_FUNCTION(execGetTrackerSpecFromHandle); \
	DECLARE_FUNCTION(execAddTracker); \
	DECLARE_FUNCTION(execSetGlobalVisibility); \
	DECLARE_FUNCTION(execProjectWorldToCapturedScreen); \
	DECLARE_FUNCTION(execGetTracking2DComponentFromActor); \
	DECLARE_FUNCTION(execProjectWorldToScreenOrScreenEdge);


ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTrackingSystem2DGlobals_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTrackingSystem2DGlobals(); \
	friend struct Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTrackingSystem2DGlobals_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorTrackingSystem2DGlobals, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ActorTrackingSystem2D"), Z_Construct_UClass_UActorTrackingSystem2DGlobals_NoRegister) \
	DECLARE_SERIALIZER(UActorTrackingSystem2DGlobals)


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTrackingSystem2DGlobals(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorTrackingSystem2DGlobals(UActorTrackingSystem2DGlobals&&) = delete; \
	UActorTrackingSystem2DGlobals(const UActorTrackingSystem2DGlobals&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTrackingSystem2DGlobals); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTrackingSystem2DGlobals); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTrackingSystem2DGlobals) \
	NO_API virtual ~UActorTrackingSystem2DGlobals();


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_21_PROLOG
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_INCLASS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorTrackingSystem2DGlobals;

// ********** End Class UActorTrackingSystem2DGlobals **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
