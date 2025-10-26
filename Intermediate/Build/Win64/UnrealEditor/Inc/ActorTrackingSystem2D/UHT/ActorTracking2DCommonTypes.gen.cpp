// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTracking2DCommonTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTracking2DCommonTypes() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UEnum* Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EDataValidationExecs ******************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDataValidationExecs;
static UEnum* EDataValidationExecs_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDataValidationExecs.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDataValidationExecs.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs, (UObject*)Z_Construct_UPackage__Script_ActorTrackingSystem2D(), TEXT("EDataValidationExecs"));
	}
	return Z_Registration_Info_UEnum_EDataValidationExecs.OuterSingleton;
}
template<> ACTORTRACKINGSYSTEM2D_API UEnum* StaticEnum<EDataValidationExecs>()
{
	return EDataValidationExecs_StaticEnum();
}
struct Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/ActorTracking2DCommonTypes.h" },
		{ "NotValid.Comment", "/**\n * \n */" },
		{ "NotValid.Name", "EDataValidationExecs::NotValid" },
		{ "Valid.Comment", "/**\n * \n */" },
		{ "Valid.Name", "EDataValidationExecs::Valid" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDataValidationExecs::Valid", (int64)EDataValidationExecs::Valid },
		{ "EDataValidationExecs::NotValid", (int64)EDataValidationExecs::NotValid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
	nullptr,
	"EDataValidationExecs",
	"EDataValidationExecs",
	Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs()
{
	if (!Z_Registration_Info_UEnum_EDataValidationExecs.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDataValidationExecs.InnerSingleton, Z_Construct_UEnum_ActorTrackingSystem2D_EDataValidationExecs_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDataValidationExecs.InnerSingleton;
}
// ********** End Enum EDataValidationExecs ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DCommonTypes_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDataValidationExecs_StaticEnum, TEXT("EDataValidationExecs"), &Z_Registration_Info_UEnum_EDataValidationExecs, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2686937066U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DCommonTypes_h__Script_ActorTrackingSystem2D_3367202498(TEXT("/Script/ActorTrackingSystem2D"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DCommonTypes_h__Script_ActorTrackingSystem2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DCommonTypes_h__Script_ActorTrackingSystem2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
