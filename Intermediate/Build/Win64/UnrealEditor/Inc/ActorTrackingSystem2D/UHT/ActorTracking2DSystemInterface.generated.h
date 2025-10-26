// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ActorTracking2DSystemInterface.h"

#ifdef ACTORTRACKINGSYSTEM2D_ActorTracking2DSystemInterface_generated_h
#error "ActorTracking2DSystemInterface.generated.h already included, missing '#pragma once' in ActorTracking2DSystemInterface.h"
#endif
#define ACTORTRACKINGSYSTEM2D_ActorTracking2DSystemInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Interface UActorTracking2DSystemInterface **************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSystemInterface_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorTracking2DSystemInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UActorTracking2DSystemInterface(UActorTracking2DSystemInterface&&) = delete; \
	UActorTracking2DSystemInterface(const UActorTracking2DSystemInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorTracking2DSystemInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorTracking2DSystemInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorTracking2DSystemInterface) \
	virtual ~UActorTracking2DSystemInterface() = default;


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUActorTracking2DSystemInterface(); \
	friend struct Z_Construct_UClass_UActorTracking2DSystemInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSystemInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UActorTracking2DSystemInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActorTrackingSystem2D"), Z_Construct_UClass_UActorTracking2DSystemInterface_NoRegister) \
	DECLARE_SERIALIZER(UActorTracking2DSystemInterface)


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_GENERATED_UINTERFACE_BODY() \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IActorTracking2DSystemInterface() {} \
public: \
	typedef UActorTracking2DSystemInterface UClassType; \
	typedef IActorTracking2DSystemInterface ThisClass; \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_11_PROLOG
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h_14_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UActorTracking2DSystemInterface;

// ********** End Interface UActorTracking2DSystemInterface ****************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
