// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TrackingWidgetInterface.h"

#ifdef ACTORTRACKINGSYSTEM2D_TrackingWidgetInterface_generated_h
#error "TrackingWidgetInterface.generated.h already included, missing '#pragma once' in TrackingWidgetInterface.h"
#endif
#define ACTORTRACKINGSYSTEM2D_TrackingWidgetInterface_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
struct FGameplayTagContainer;

// ********** Begin Interface UTrackingWidgetInterface *********************************************
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void TrackerTick_Implementation(float DeltaTime, bool IsInViewport, FVector2D const& ScreenPosition) {}; \
	virtual void SetTrackerData_Implementation(AActor* Tracked, UObject* ContextObject, FGameplayTagContainer const& InContextTags) {}; \
	DECLARE_FUNCTION(execCanKillOnTimeRemainingElapsed); \
	DECLARE_FUNCTION(execTrackerTick); \
	DECLARE_FUNCTION(execSetTrackerData);


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_CALLBACK_WRAPPERS
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UTrackingWidgetInterface_NoRegister();

#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTrackingWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTrackingWidgetInterface(UTrackingWidgetInterface&&) = delete; \
	UTrackingWidgetInterface(const UTrackingWidgetInterface&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTrackingWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTrackingWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTrackingWidgetInterface) \
	virtual ~UTrackingWidgetInterface() = default;


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUTrackingWidgetInterface(); \
	friend struct Z_Construct_UClass_UTrackingWidgetInterface_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UTrackingWidgetInterface_NoRegister(); \
public: \
	DECLARE_CLASS2(UTrackingWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/ActorTrackingSystem2D"), Z_Construct_UClass_UTrackingWidgetInterface_NoRegister) \
	DECLARE_SERIALIZER(UTrackingWidgetInterface)


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ITrackingWidgetInterface() {} \
public: \
	typedef UTrackingWidgetInterface UClassType; \
	typedef ITrackingWidgetInterface ThisClass; \
	static bool Execute_CanKillOnTimeRemainingElapsed(const UObject* O); \
	static void Execute_SetTrackerData(UObject* O, AActor* Tracked, UObject* ContextObject, FGameplayTagContainer const& InContextTags); \
	static void Execute_TrackerTick(UObject* O, float DeltaTime, bool IsInViewport, FVector2D const& ScreenPosition); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_12_PROLOG
#define FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_CALLBACK_WRAPPERS \
	FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTrackingWidgetInterface;

// ********** End Interface UTrackingWidgetInterface ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
