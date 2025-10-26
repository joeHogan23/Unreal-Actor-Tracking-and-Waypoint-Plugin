// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTracking2DProjectSettings.h"

#ifdef ACTORTRACKINGSYSTEM2D_ActorTracking2DProjectSettings_generated_h
#error "ActorTracking2DProjectSettings.generated.h already included, missing '#pragma once' in ActorTracking2DProjectSettings.h"
#endif
#define ACTORTRACKINGSYSTEM2D_ActorTracking2DProjectSettings_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UActorTracking2DProjectSettings ******************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DProjectSettings_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorTracking2DProjectSettings(); \
	friend struct Z_Construct_UClass_UActorTracking2DProjectSettings_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DProjectSettings_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorTracking2DProjectSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/ActorTrackingSystem2D"), Z_Construct_UClass_UActorTracking2DProjectSettings_NoRegister) \
	DECLARE_SERIALIZER(UActorTracking2DProjectSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTracking2DProjectSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorTracking2DProjectSettings(UActorTracking2DProjectSettings&&) = delete; \
	UActorTracking2DProjectSettings(const UActorTracking2DProjectSettings&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTracking2DProjectSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTracking2DProjectSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTracking2DProjectSettings) \
	NO_API virtual ~UActorTracking2DProjectSettings();


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h_12_PROLOG
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h_15_INCLASS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorTracking2DProjectSettings;

// ********** End Class UActorTracking2DProjectSettings ********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
