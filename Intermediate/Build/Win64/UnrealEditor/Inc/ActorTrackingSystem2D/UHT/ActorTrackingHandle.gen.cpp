// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTrackingHandle.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTrackingHandle() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingHandle();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorTrackingHandle **********************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorTrackingHandle;
class UScriptStruct* FActorTrackingHandle::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingHandle.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorTrackingHandle.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTrackingHandle, (UObject*)Z_Construct_UPackage__Script_ActorTrackingSystem2D(), TEXT("ActorTrackingHandle"));
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingHandle.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorTrackingHandle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/ActorTrackingHandle.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTrackingHandle>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTrackingHandle_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
	nullptr,
	&NewStructOps,
	"ActorTrackingHandle",
	nullptr,
	0,
	sizeof(FActorTrackingHandle),
	alignof(FActorTrackingHandle),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingHandle_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorTrackingHandle_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingHandle()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingHandle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorTrackingHandle.InnerSingleton, Z_Construct_UScriptStruct_FActorTrackingHandle_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingHandle.InnerSingleton;
}
// ********** End ScriptStruct FActorTrackingHandle ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingHandle_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorTrackingHandle::StaticStruct, Z_Construct_UScriptStruct_FActorTrackingHandle_Statics::NewStructOps, TEXT("ActorTrackingHandle"), &Z_Registration_Info_UScriptStruct_FActorTrackingHandle, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorTrackingHandle), 1325787983U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingHandle_h__Script_ActorTrackingSystem2D_129232483(TEXT("/Script/ActorTrackingSystem2D"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingHandle_h__Script_ActorTrackingSystem2D_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingHandle_h__Script_ActorTrackingSystem2D_Statics::ScriptStructInfo),
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
