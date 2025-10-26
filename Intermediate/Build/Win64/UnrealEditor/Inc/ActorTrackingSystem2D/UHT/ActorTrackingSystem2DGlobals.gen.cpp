// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTrackingSystem2DGlobals.h"
#include "ActorTrackingDescriptor.h"
#include "ActorTrackingHandle.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTrackingSystem2DGlobals() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DComponent_NoRegister();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTrackingSystem2DGlobals();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTrackingSystem2DGlobals_NoRegister();
ACTORTRACKINGSYSTEM2D_API UEnum* Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingDescriptor();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingHandle();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpec();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USceneCaptureComponent2D_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorTrackingSystem2DGlobals Function AddTracker ************************
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics
{
	struct ActorTrackingSystem2DGlobals_eventAddTracker_Parms
	{
		AActor* Tracked;
		const TSubclassOf<UUserWidget> TrackingWidget;
		UObject* ContextObject;
		FActorTrackingDescriptor Descriptor;
		bool RebuildIfActive;
		FActorTrackingHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingWidget_MetaData[] = {
		{ "MustImplement", "/Script/ActorTrackingSystem2D.TrackingWidgetInterface" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracked;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TrackingWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
	static void NewProp_RebuildIfActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_RebuildIfActive;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_Tracked = { "Tracked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventAddTracker_Parms, Tracked), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_TrackingWidget = { "TrackingWidget", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventAddTracker_Parms, TrackingWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingWidget_MetaData), NewProp_TrackingWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventAddTracker_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventAddTracker_Parms, Descriptor), Z_Construct_UScriptStruct_FActorTrackingDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptor_MetaData), NewProp_Descriptor_MetaData) }; // 988682890
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_RebuildIfActive_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventAddTracker_Parms*)Obj)->RebuildIfActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_RebuildIfActive = { "RebuildIfActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventAddTracker_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_RebuildIfActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventAddTracker_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1325787983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_Tracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_TrackingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_Descriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_RebuildIfActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "AddTracker", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::ActorTrackingSystem2DGlobals_eventAddTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::ActorTrackingSystem2DGlobals_eventAddTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execAddTracker)
{
	P_GET_OBJECT(AActor,Z_Param_Tracked);
	P_GET_OBJECT(UClass,Z_Param_TrackingWidget);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_GET_STRUCT_REF(FActorTrackingDescriptor,Z_Param_Out_Descriptor);
	P_GET_UBOOL(Z_Param_RebuildIfActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActorTrackingHandle*)Z_Param__Result=UActorTrackingSystem2DGlobals::AddTracker(Z_Param_Tracked,Z_Param_TrackingWidget,Z_Param_ContextObject,Z_Param_Out_Descriptor,Z_Param_RebuildIfActive);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function AddTracker **************************

// ********** Begin Class UActorTrackingSystem2DGlobals Function BP_AddTrackerVisibilityTag ********
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics
{
	struct ActorTrackingSystem2DGlobals_eventBP_AddTrackerVisibilityTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor Tracking 2D" },
		{ "DisplayName", "Add Tracker Visibility Tag" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventBP_AddTrackerVisibilityTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventBP_AddTrackerVisibilityTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "BP_AddTrackerVisibilityTag", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::ActorTrackingSystem2DGlobals_eventBP_AddTrackerVisibilityTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::ActorTrackingSystem2DGlobals_eventBP_AddTrackerVisibilityTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execBP_AddTrackerVisibilityTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_AddTrackerVisibilityTag(Z_Param_WorldContextObject,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function BP_AddTrackerVisibilityTag **********

// ********** Begin Class UActorTrackingSystem2DGlobals Function BP_RemoveTrackerVisibilityTag *****
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics
{
	struct ActorTrackingSystem2DGlobals_eventBP_RemoveTrackerVisibilityTag_Parms
	{
		const UObject* WorldContextObject;
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor Tracking 2D" },
		{ "DisplayName", "Remove Tracker Visibility Tag" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventBP_RemoveTrackerVisibilityTag_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventBP_RemoveTrackerVisibilityTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "BP_RemoveTrackerVisibilityTag", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::ActorTrackingSystem2DGlobals_eventBP_RemoveTrackerVisibilityTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::ActorTrackingSystem2DGlobals_eventBP_RemoveTrackerVisibilityTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execBP_RemoveTrackerVisibilityTag)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_RemoveTrackerVisibilityTag(Z_Param_WorldContextObject,Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function BP_RemoveTrackerVisibilityTag *******

// ********** Begin Class UActorTrackingSystem2DGlobals Function GetTrackerSpecFromHandle **********
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics
{
	struct ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms
	{
		UObject* WorldContextObject;
		FActorTrackingHandle Handle;
		FActorTrackingSpec OutSpec;
		EDataValidationExecs ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "DisplayName", "Get Tracker Spec From Handle" },
		{ "ExpandEnumAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSpec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms, Handle), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1325787983
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_OutSpec = { "OutSpec", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms, OutSpec), Z_Construct_UScriptStruct_FActorTrackingSpec, METADATA_PARAMS(0, nullptr) }; // 1653082114
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms, ReturnValue), Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs, METADATA_PARAMS(0, nullptr) }; // 2686937066
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_OutSpec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "GetTrackerSpecFromHandle", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::ActorTrackingSystem2DGlobals_eventGetTrackerSpecFromHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execGetTrackerSpecFromHandle)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FActorTrackingHandle,Z_Param_Out_Handle);
	P_GET_STRUCT_REF(FActorTrackingSpec,Z_Param_Out_OutSpec);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDataValidationExecs*)Z_Param__Result=P_THIS->GetTrackerSpecFromHandle(Z_Param_WorldContextObject,Z_Param_Out_Handle,Z_Param_Out_OutSpec);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function GetTrackerSpecFromHandle ************

// ********** Begin Class UActorTrackingSystem2DGlobals Function GetTracking2DComponentFromActor ***
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics
{
	struct ActorTrackingSystem2DGlobals_eventGetTracking2DComponentFromActor_Parms
	{
		const AActor* Actor;
		UActorTracking2DComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actor_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventGetTracking2DComponentFromActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actor_MetaData), NewProp_Actor_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventGetTracking2DComponentFromActor_Parms, ReturnValue), Z_Construct_UClass_UActorTracking2DComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "GetTracking2DComponentFromActor", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::ActorTrackingSystem2DGlobals_eventGetTracking2DComponentFromActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::ActorTrackingSystem2DGlobals_eventGetTracking2DComponentFromActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execGetTracking2DComponentFromActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorTracking2DComponent**)Z_Param__Result=UActorTrackingSystem2DGlobals::GetTracking2DComponentFromActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function GetTracking2DComponentFromActor *****

// ********** Begin Class UActorTrackingSystem2DGlobals Function IsTrackingHandleValid *************
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics
{
	struct ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Parms
	{
		FActorTrackingHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "DisplayName", "Is Valid" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Parms, Handle), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1325787983
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "IsTrackingHandleValid", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execIsTrackingHandleValid)
{
	P_GET_STRUCT_REF(FActorTrackingHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorTrackingSystem2DGlobals::IsTrackingHandleValid(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function IsTrackingHandleValid ***************

// ********** Begin Class UActorTrackingSystem2DGlobals Function IsTrackingHandleValid_Execs *******
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics
{
	struct ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Execs_Parms
	{
		FActorTrackingHandle Handle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "DisplayName", "Is Valid" },
		{ "ExpandBoolAsExecs", "ReturnValue" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Execs_Parms, Handle), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1325787983
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Execs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Execs_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "IsTrackingHandleValid_Execs", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Execs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::ActorTrackingSystem2DGlobals_eventIsTrackingHandleValid_Execs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execIsTrackingHandleValid_Execs)
{
	P_GET_STRUCT_REF(FActorTrackingHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorTrackingSystem2DGlobals::IsTrackingHandleValid_Execs(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function IsTrackingHandleValid_Execs *********

// ********** Begin Class UActorTrackingSystem2DGlobals Function ProjectWorldToCapturedScreen ******
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics
{
	struct ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms
	{
		USceneCaptureComponent2D* CaptureComponent;
		FVector WorldPos;
		const UWidget* ProjectionWidget;
		FVector2D OutScreenPos;
		bool ShouldCalculateOutsideProjectionView;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "CPP_Default_ShouldCalculateOutsideProjectionView", "false" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CaptureComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProjectionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShouldCalculateOutsideProjectionView_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CaptureComponent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProjectionWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenPos;
	static void NewProp_ShouldCalculateOutsideProjectionView_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ShouldCalculateOutsideProjectionView;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_CaptureComponent = { "CaptureComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms, CaptureComponent), Z_Construct_UClass_USceneCaptureComponent2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CaptureComponent_MetaData), NewProp_CaptureComponent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPos_MetaData), NewProp_WorldPos_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ProjectionWidget = { "ProjectionWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms, ProjectionWidget), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProjectionWidget_MetaData), NewProp_ProjectionWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_OutScreenPos = { "OutScreenPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms, OutScreenPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ShouldCalculateOutsideProjectionView_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms*)Obj)->ShouldCalculateOutsideProjectionView = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ShouldCalculateOutsideProjectionView = { "ShouldCalculateOutsideProjectionView", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ShouldCalculateOutsideProjectionView_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShouldCalculateOutsideProjectionView_MetaData), NewProp_ShouldCalculateOutsideProjectionView_MetaData) };
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_CaptureComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_WorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ProjectionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_OutScreenPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ShouldCalculateOutsideProjectionView,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "ProjectWorldToCapturedScreen", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::ActorTrackingSystem2DGlobals_eventProjectWorldToCapturedScreen_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execProjectWorldToCapturedScreen)
{
	P_GET_OBJECT(USceneCaptureComponent2D,Z_Param_CaptureComponent);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos);
	P_GET_OBJECT(UWidget,Z_Param_ProjectionWidget);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutScreenPos);
	P_GET_UBOOL(Z_Param_ShouldCalculateOutsideProjectionView);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorTrackingSystem2DGlobals::ProjectWorldToCapturedScreen(Z_Param_CaptureComponent,Z_Param_Out_WorldPos,Z_Param_ProjectionWidget,Z_Param_Out_OutScreenPos,Z_Param_ShouldCalculateOutsideProjectionView);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function ProjectWorldToCapturedScreen ********

// ********** Begin Class UActorTrackingSystem2DGlobals Function ProjectWorldToScreenOrScreenEdge **
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics
{
	struct ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms
	{
		APlayerController* Controller;
		FVector WorldPos;
		float EdgeOffsetPercent;
		FVector2D OutScreenPos;
		float OutAngle;
		bool IsInViewport;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldPos_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOffsetPercent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Controller;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOffsetPercent;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutScreenPos;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutAngle;
	static void NewProp_IsInViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInViewport;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_Controller = { "Controller", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_WorldPos = { "WorldPos", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms, WorldPos), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldPos_MetaData), NewProp_WorldPos_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_EdgeOffsetPercent = { "EdgeOffsetPercent", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms, EdgeOffsetPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOffsetPercent_MetaData), NewProp_EdgeOffsetPercent_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_OutScreenPos = { "OutScreenPos", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms, OutScreenPos), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_OutAngle = { "OutAngle", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms, OutAngle), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_IsInViewport_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms*)Obj)->IsInViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_IsInViewport = { "IsInViewport", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_IsInViewport_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_Controller,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_WorldPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_EdgeOffsetPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_OutScreenPos,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_OutAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_IsInViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "ProjectWorldToScreenOrScreenEdge", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::ActorTrackingSystem2DGlobals_eventProjectWorldToScreenOrScreenEdge_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execProjectWorldToScreenOrScreenEdge)
{
	P_GET_OBJECT(APlayerController,Z_Param_Controller);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldPos);
	P_GET_PROPERTY(FFloatProperty,Z_Param_EdgeOffsetPercent);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_OutScreenPos);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutAngle);
	P_GET_UBOOL_REF(Z_Param_Out_IsInViewport);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UActorTrackingSystem2DGlobals::ProjectWorldToScreenOrScreenEdge(Z_Param_Controller,Z_Param_Out_WorldPos,Z_Param_EdgeOffsetPercent,Z_Param_Out_OutScreenPos,Z_Param_Out_OutAngle,Z_Param_Out_IsInViewport);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function ProjectWorldToScreenOrScreenEdge ****

// ********** Begin Class UActorTrackingSystem2DGlobals Function RemoveTracker *********************
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics
{
	struct ActorTrackingSystem2DGlobals_eventRemoveTracker_Parms
	{
		const UObject* WorldContextObject;
		FActorTrackingHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventRemoveTracker_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTrackingSystem2DGlobals_eventRemoveTracker_Parms, Handle), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1325787983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "RemoveTracker", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::ActorTrackingSystem2DGlobals_eventRemoveTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::ActorTrackingSystem2DGlobals_eventRemoveTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execRemoveTracker)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FActorTrackingHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorTrackingSystem2DGlobals::RemoveTracker(Z_Param_WorldContextObject,Z_Param_Out_Handle);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function RemoveTracker ***********************

// ********** Begin Class UActorTrackingSystem2DGlobals Function SetGlobalVisibility ***************
struct Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics
{
	struct ActorTrackingSystem2DGlobals_eventSetGlobalVisibility_Parms
	{
		bool NewVisibility;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewVisibility_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_NewVisibility_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_NewVisibility;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::NewProp_NewVisibility_SetBit(void* Obj)
{
	((ActorTrackingSystem2DGlobals_eventSetGlobalVisibility_Parms*)Obj)->NewVisibility = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::NewProp_NewVisibility = { "NewVisibility", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTrackingSystem2DGlobals_eventSetGlobalVisibility_Parms), &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::NewProp_NewVisibility_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewVisibility_MetaData), NewProp_NewVisibility_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::NewProp_NewVisibility,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTrackingSystem2DGlobals, nullptr, "SetGlobalVisibility", Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::ActorTrackingSystem2DGlobals_eventSetGlobalVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::ActorTrackingSystem2DGlobals_eventSetGlobalVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTrackingSystem2DGlobals::execSetGlobalVisibility)
{
	P_GET_UBOOL(Z_Param_NewVisibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	UActorTrackingSystem2DGlobals::SetGlobalVisibility(Z_Param_NewVisibility);
	P_NATIVE_END;
}
// ********** End Class UActorTrackingSystem2DGlobals Function SetGlobalVisibility *****************

// ********** Begin Class UActorTrackingSystem2DGlobals ********************************************
void UActorTrackingSystem2DGlobals::StaticRegisterNativesUActorTrackingSystem2DGlobals()
{
	UClass* Class = UActorTrackingSystem2DGlobals::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTracker", &UActorTrackingSystem2DGlobals::execAddTracker },
		{ "BP_AddTrackerVisibilityTag", &UActorTrackingSystem2DGlobals::execBP_AddTrackerVisibilityTag },
		{ "BP_RemoveTrackerVisibilityTag", &UActorTrackingSystem2DGlobals::execBP_RemoveTrackerVisibilityTag },
		{ "GetTrackerSpecFromHandle", &UActorTrackingSystem2DGlobals::execGetTrackerSpecFromHandle },
		{ "GetTracking2DComponentFromActor", &UActorTrackingSystem2DGlobals::execGetTracking2DComponentFromActor },
		{ "IsTrackingHandleValid", &UActorTrackingSystem2DGlobals::execIsTrackingHandleValid },
		{ "IsTrackingHandleValid_Execs", &UActorTrackingSystem2DGlobals::execIsTrackingHandleValid_Execs },
		{ "ProjectWorldToCapturedScreen", &UActorTrackingSystem2DGlobals::execProjectWorldToCapturedScreen },
		{ "ProjectWorldToScreenOrScreenEdge", &UActorTrackingSystem2DGlobals::execProjectWorldToScreenOrScreenEdge },
		{ "RemoveTracker", &UActorTrackingSystem2DGlobals::execRemoveTracker },
		{ "SetGlobalVisibility", &UActorTrackingSystem2DGlobals::execSetGlobalVisibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals;
UClass* UActorTrackingSystem2DGlobals::GetPrivateStaticClass()
{
	using TClass = UActorTrackingSystem2DGlobals;
	if (!Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorTrackingSystem2DGlobals"),
			Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals.InnerSingleton,
			StaticRegisterNativesUActorTrackingSystem2DGlobals,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorTrackingSystem2DGlobals_NoRegister()
{
	return UActorTrackingSystem2DGlobals::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActorTrackingSystem2DGlobals.h" },
		{ "ModuleRelativePath", "Public/ActorTrackingSystem2DGlobals.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_AddTracker, "AddTracker" }, // 932053663
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_AddTrackerVisibilityTag, "BP_AddTrackerVisibilityTag" }, // 3784540183
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_BP_RemoveTrackerVisibilityTag, "BP_RemoveTrackerVisibilityTag" }, // 683564882
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTrackerSpecFromHandle, "GetTrackerSpecFromHandle" }, // 3553905476
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_GetTracking2DComponentFromActor, "GetTracking2DComponentFromActor" }, // 3358789774
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid, "IsTrackingHandleValid" }, // 1559087821
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_IsTrackingHandleValid_Execs, "IsTrackingHandleValid_Execs" }, // 2050143801
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToCapturedScreen, "ProjectWorldToCapturedScreen" }, // 2710816596
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_ProjectWorldToScreenOrScreenEdge, "ProjectWorldToScreenOrScreenEdge" }, // 805512088
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_RemoveTracker, "RemoveTracker" }, // 1919406947
		{ &Z_Construct_UFunction_UActorTrackingSystem2DGlobals_SetGlobalVisibility, "SetGlobalVisibility" }, // 123777661
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTrackingSystem2DGlobals>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics::ClassParams = {
	&UActorTrackingSystem2DGlobals::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorTrackingSystem2DGlobals()
{
	if (!Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals.OuterSingleton, Z_Construct_UClass_UActorTrackingSystem2DGlobals_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals.OuterSingleton;
}
UActorTrackingSystem2DGlobals::UActorTrackingSystem2DGlobals(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTrackingSystem2DGlobals);
UActorTrackingSystem2DGlobals::~UActorTrackingSystem2DGlobals() {}
// ********** End Class UActorTrackingSystem2DGlobals **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorTrackingSystem2DGlobals, UActorTrackingSystem2DGlobals::StaticClass, TEXT("UActorTrackingSystem2DGlobals"), &Z_Registration_Info_UClass_UActorTrackingSystem2DGlobals, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTrackingSystem2DGlobals), 3201989430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h__Script_ActorTrackingSystem2D_872913906(TEXT("/Script/ActorTrackingSystem2D"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h__Script_ActorTrackingSystem2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSystem2DGlobals_h__Script_ActorTrackingSystem2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
