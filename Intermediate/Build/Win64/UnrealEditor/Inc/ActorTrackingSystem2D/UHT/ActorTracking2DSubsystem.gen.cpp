// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTracking2DSubsystem.h"
#include "ActorTrackingDescriptor.h"
#include "ActorTrackingHandle.h"
#include "ActorTrackingSpecHandlePair.h"
#include "Blueprint/UserWidgetPool.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTracking2DSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSubsystem();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSubsystem_NoRegister();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingDescriptor();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingHandle();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTickableWorldSubsystem();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UMG_API UScriptStruct* Z_Construct_UScriptStruct_FUserWidgetPool();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorTracking2DSubsystem Function AddTracker ****************************
struct Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics
{
	struct ActorTracking2DSubsystem_eventAddTracker_Parms
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
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_Tracked = { "Tracked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventAddTracker_Parms, Tracked), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_TrackingWidget = { "TrackingWidget", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventAddTracker_Parms, TrackingWidget), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingWidget_MetaData), NewProp_TrackingWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventAddTracker_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventAddTracker_Parms, Descriptor), Z_Construct_UScriptStruct_FActorTrackingDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptor_MetaData), NewProp_Descriptor_MetaData) }; // 988682890
void Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_RebuildIfActive_SetBit(void* Obj)
{
	((ActorTracking2DSubsystem_eventAddTracker_Parms*)Obj)->RebuildIfActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_RebuildIfActive = { "RebuildIfActive", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ActorTracking2DSubsystem_eventAddTracker_Parms), &Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_RebuildIfActive_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventAddTracker_Parms, ReturnValue), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1325787983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_Tracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_TrackingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_Descriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_RebuildIfActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTracking2DSubsystem, nullptr, "AddTracker", Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::ActorTracking2DSubsystem_eventAddTracker_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::ActorTracking2DSubsystem_eventAddTracker_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTracking2DSubsystem::execAddTracker)
{
	P_GET_OBJECT(AActor,Z_Param_Tracked);
	P_GET_OBJECT(UClass,Z_Param_TrackingWidget);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_GET_STRUCT_REF(FActorTrackingDescriptor,Z_Param_Out_Descriptor);
	P_GET_UBOOL(Z_Param_RebuildIfActive);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FActorTrackingHandle*)Z_Param__Result=P_THIS->AddTracker(Z_Param_Tracked,Z_Param_TrackingWidget,Z_Param_ContextObject,Z_Param_Out_Descriptor,Z_Param_RebuildIfActive);
	P_NATIVE_END;
}
// ********** End Class UActorTracking2DSubsystem Function AddTracker ******************************

// ********** Begin Class UActorTracking2DSubsystem Function BP_AddTrackerVisibilityTag ************
struct Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics
{
	struct ActorTracking2DSubsystem_eventBP_AddTrackerVisibilityTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor Tracking 2D" },
		{ "DisplayName", "Add Visibility Tag" },
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventBP_AddTrackerVisibilityTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTracking2DSubsystem, nullptr, "BP_AddTrackerVisibilityTag", Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::ActorTracking2DSubsystem_eventBP_AddTrackerVisibilityTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::ActorTracking2DSubsystem_eventBP_AddTrackerVisibilityTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTracking2DSubsystem::execBP_AddTrackerVisibilityTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_AddTrackerVisibilityTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UActorTracking2DSubsystem Function BP_AddTrackerVisibilityTag **************

// ********** Begin Class UActorTracking2DSubsystem Function BP_RemoveVisibilityTag ****************
struct Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics
{
	struct ActorTracking2DSubsystem_eventBP_RemoveVisibilityTag_Parms
	{
		FGameplayTag Tag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Actor Tracking 2D" },
		{ "DisplayName", "Remove Visibility Tag" },
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tag_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Tag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::NewProp_Tag = { "Tag", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventBP_RemoveVisibilityTag_Parms, Tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tag_MetaData), NewProp_Tag_MetaData) }; // 133831994
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::NewProp_Tag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTracking2DSubsystem, nullptr, "BP_RemoveVisibilityTag", Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::ActorTracking2DSubsystem_eventBP_RemoveVisibilityTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::ActorTracking2DSubsystem_eventBP_RemoveVisibilityTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTracking2DSubsystem::execBP_RemoveVisibilityTag)
{
	P_GET_STRUCT(FGameplayTag,Z_Param_Tag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->BP_RemoveVisibilityTag(Z_Param_Tag);
	P_NATIVE_END;
}
// ********** End Class UActorTracking2DSubsystem Function BP_RemoveVisibilityTag ******************

// ********** Begin Class UActorTracking2DSubsystem Function RemoveFromGlobalMap *******************
struct Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics
{
	struct ActorTracking2DSubsystem_eventRemoveFromGlobalMap_Parms
	{
		FActorTrackingHandle Handle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Tracking System 2D" },
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ActorTracking2DSubsystem_eventRemoveFromGlobalMap_Parms, Handle), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1325787983
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::NewProp_Handle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UActorTracking2DSubsystem, nullptr, "RemoveFromGlobalMap", Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::ActorTracking2DSubsystem_eventRemoveFromGlobalMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::ActorTracking2DSubsystem_eventRemoveFromGlobalMap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UActorTracking2DSubsystem::execRemoveFromGlobalMap)
{
	P_GET_STRUCT_REF(FActorTrackingHandle,Z_Param_Out_Handle);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveFromGlobalMap(Z_Param_Out_Handle);
	P_NATIVE_END;
}
// ********** End Class UActorTracking2DSubsystem Function RemoveFromGlobalMap *********************

// ********** Begin Class UActorTracking2DSubsystem ************************************************
void UActorTracking2DSubsystem::StaticRegisterNativesUActorTracking2DSubsystem()
{
	UClass* Class = UActorTracking2DSubsystem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddTracker", &UActorTracking2DSubsystem::execAddTracker },
		{ "BP_AddTrackerVisibilityTag", &UActorTracking2DSubsystem::execBP_AddTrackerVisibilityTag },
		{ "BP_RemoveVisibilityTag", &UActorTracking2DSubsystem::execBP_RemoveVisibilityTag },
		{ "RemoveFromGlobalMap", &UActorTracking2DSubsystem::execRemoveFromGlobalMap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorTracking2DSubsystem;
UClass* UActorTracking2DSubsystem::GetPrivateStaticClass()
{
	using TClass = UActorTracking2DSubsystem;
	if (!Z_Registration_Info_UClass_UActorTracking2DSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorTracking2DSubsystem"),
			Z_Registration_Info_UClass_UActorTracking2DSubsystem.InnerSingleton,
			StaticRegisterNativesUActorTracking2DSubsystem,
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
	return Z_Registration_Info_UClass_UActorTracking2DSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorTracking2DSubsystem_NoRegister()
{
	return UActorTracking2DSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorTracking2DSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActorTracking2DSubsystem.h" },
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTags_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Map_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetPool_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorTracking2DSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Map_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Map;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetPool;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UActorTracking2DSubsystem_AddTracker, "AddTracker" }, // 3500553725
		{ &Z_Construct_UFunction_UActorTracking2DSubsystem_BP_AddTrackerVisibilityTag, "BP_AddTrackerVisibilityTag" }, // 2832482592
		{ &Z_Construct_UFunction_UActorTracking2DSubsystem_BP_RemoveVisibilityTag, "BP_RemoveVisibilityTag" }, // 814476976
		{ &Z_Construct_UFunction_UActorTracking2DSubsystem_RemoveFromGlobalMap, "RemoveFromGlobalMap" }, // 1207559070
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTracking2DSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_VisibilityTags = { "VisibilityTags", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorTracking2DSubsystem, VisibilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityTags_MetaData), NewProp_VisibilityTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_Map_Inner = { "Map", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair, METADATA_PARAMS(0, nullptr) }; // 893652515
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_Map = { "Map", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorTracking2DSubsystem, Map), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Map_MetaData), NewProp_Map_MetaData) }; // 893652515
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_WidgetPool = { "WidgetPool", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorTracking2DSubsystem, WidgetPool), Z_Construct_UScriptStruct_FUserWidgetPool, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetPool_MetaData), NewProp_WidgetPool_MetaData) }; // 3703895965
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorTracking2DSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_VisibilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_Map_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_Map,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTracking2DSubsystem_Statics::NewProp_WidgetPool,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorTracking2DSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTickableWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTracking2DSubsystem_Statics::ClassParams = {
	&UActorTracking2DSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UActorTracking2DSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorTracking2DSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorTracking2DSubsystem()
{
	if (!Z_Registration_Info_UClass_UActorTracking2DSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTracking2DSubsystem.OuterSingleton, Z_Construct_UClass_UActorTracking2DSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorTracking2DSubsystem.OuterSingleton;
}
UActorTracking2DSubsystem::UActorTracking2DSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTracking2DSubsystem);
UActorTracking2DSubsystem::~UActorTracking2DSubsystem() {}
// ********** End Class UActorTracking2DSubsystem **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorTracking2DSubsystem, UActorTracking2DSubsystem::StaticClass, TEXT("UActorTracking2DSubsystem"), &Z_Registration_Info_UClass_UActorTracking2DSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTracking2DSubsystem), 3070983809U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h__Script_ActorTrackingSystem2D_3423936540(TEXT("/Script/ActorTrackingSystem2D"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h__Script_ActorTrackingSystem2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSubsystem_h__Script_ActorTrackingSystem2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
