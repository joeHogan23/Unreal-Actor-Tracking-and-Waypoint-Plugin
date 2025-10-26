// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTrackingSpecHandlePair.h"
#include "ActorTrackingDescriptor.h"
#include "ActorTrackingHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTrackingSpecHandlePair() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingHandle();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpec();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorTrackingSpecHandlePair **************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair;
class UScriptStruct* FActorTrackingSpecHandlePair::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair, (UObject*)Z_Construct_UPackage__Script_ActorTrackingSystem2D(), TEXT("ActorTrackingSpecHandlePair"));
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/ActorTrackingSpecHandlePair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Handle_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorTrackingSpecHandlePair.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spec_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorTrackingSpecHandlePair.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Handle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Spec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTrackingSpecHandlePair>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::NewProp_Handle = { "Handle", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpecHandlePair, Handle), Z_Construct_UScriptStruct_FActorTrackingHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Handle_MetaData), NewProp_Handle_MetaData) }; // 1325787983
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::NewProp_Spec = { "Spec", nullptr, (EPropertyFlags)0x0040008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpecHandlePair, Spec), Z_Construct_UScriptStruct_FActorTrackingSpec, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spec_MetaData), NewProp_Spec_MetaData) }; // 1653082114
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::NewProp_Handle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::NewProp_Spec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
	nullptr,
	&NewStructOps,
	"ActorTrackingSpecHandlePair",
	Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::PropPointers),
	sizeof(FActorTrackingSpecHandlePair),
	alignof(FActorTrackingSpecHandlePair),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair.InnerSingleton, Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair.InnerSingleton;
}
// ********** End ScriptStruct FActorTrackingSpecHandlePair ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSpecHandlePair_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorTrackingSpecHandlePair::StaticStruct, Z_Construct_UScriptStruct_FActorTrackingSpecHandlePair_Statics::NewStructOps, TEXT("ActorTrackingSpecHandlePair"), &Z_Registration_Info_UScriptStruct_FActorTrackingSpecHandlePair, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorTrackingSpecHandlePair), 893652515U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSpecHandlePair_h__Script_ActorTrackingSystem2D_1872436897(TEXT("/Script/ActorTrackingSystem2D"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSpecHandlePair_h__Script_ActorTrackingSystem2D_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingSpecHandlePair_h__Script_ActorTrackingSystem2D_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
