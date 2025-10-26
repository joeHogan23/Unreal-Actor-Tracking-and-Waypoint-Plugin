// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTracking2DProjectSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTracking2DProjectSettings() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DProjectSettings();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DProjectSettings_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorTracking2DProjectSettings ******************************************
void UActorTracking2DProjectSettings::StaticRegisterNativesUActorTracking2DProjectSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorTracking2DProjectSettings;
UClass* UActorTracking2DProjectSettings::GetPrivateStaticClass()
{
	using TClass = UActorTracking2DProjectSettings;
	if (!Z_Registration_Info_UClass_UActorTracking2DProjectSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorTracking2DProjectSettings"),
			Z_Registration_Info_UClass_UActorTracking2DProjectSettings.InnerSingleton,
			StaticRegisterNativesUActorTracking2DProjectSettings,
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
	return Z_Registration_Info_UClass_UActorTracking2DProjectSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorTracking2DProjectSettings_NoRegister()
{
	return UActorTracking2DProjectSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorTracking2DProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ActorTracking2DProjectSettings.h" },
		{ "ModuleRelativePath", "Public/ActorTracking2DProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeOfScreenPercent_MetaData[] = {
		{ "Category", "Design" },
		{ "ClampMax", "100" },
		{ "ClampMin", "50" },
		{ "ModuleRelativePath", "Public/ActorTracking2DProjectSettings.h" },
		{ "UIMax", "100" },
		{ "UIMin", "50" },
		{ "Units", "Percent" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bWidgetPoolingEnabled_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Public/ActorTracking2DProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EdgeOfScreenPercent;
	static void NewProp_bWidgetPoolingEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWidgetPoolingEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTracking2DProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::NewProp_EdgeOfScreenPercent = { "EdgeOfScreenPercent", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UActorTracking2DProjectSettings, EdgeOfScreenPercent), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeOfScreenPercent_MetaData), NewProp_EdgeOfScreenPercent_MetaData) };
void Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::NewProp_bWidgetPoolingEnabled_SetBit(void* Obj)
{
	((UActorTracking2DProjectSettings*)Obj)->bWidgetPoolingEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::NewProp_bWidgetPoolingEnabled = { "bWidgetPoolingEnabled", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UActorTracking2DProjectSettings), &Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::NewProp_bWidgetPoolingEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bWidgetPoolingEnabled_MetaData), NewProp_bWidgetPoolingEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::NewProp_EdgeOfScreenPercent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::NewProp_bWidgetPoolingEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::ClassParams = {
	&UActorTracking2DProjectSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorTracking2DProjectSettings()
{
	if (!Z_Registration_Info_UClass_UActorTracking2DProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTracking2DProjectSettings.OuterSingleton, Z_Construct_UClass_UActorTracking2DProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorTracking2DProjectSettings.OuterSingleton;
}
UActorTracking2DProjectSettings::UActorTracking2DProjectSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTracking2DProjectSettings);
UActorTracking2DProjectSettings::~UActorTracking2DProjectSettings() {}
// ********** End Class UActorTracking2DProjectSettings ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorTracking2DProjectSettings, UActorTracking2DProjectSettings::StaticClass, TEXT("UActorTracking2DProjectSettings"), &Z_Registration_Info_UClass_UActorTracking2DProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTracking2DProjectSettings), 152036567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h__Script_ActorTrackingSystem2D_2578159753(TEXT("/Script/ActorTrackingSystem2D"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h__Script_ActorTrackingSystem2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DProjectSettings_h__Script_ActorTrackingSystem2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
