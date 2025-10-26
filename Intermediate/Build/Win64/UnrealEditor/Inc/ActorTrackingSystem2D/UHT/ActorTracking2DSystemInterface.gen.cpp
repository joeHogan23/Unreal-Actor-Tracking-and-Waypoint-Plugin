// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTracking2DSystemInterface.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTracking2DSystemInterface() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSystemInterface();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DSystemInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UActorTracking2DSystemInterface **************************************
void UActorTracking2DSystemInterface::StaticRegisterNativesUActorTracking2DSystemInterface()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorTracking2DSystemInterface;
UClass* UActorTracking2DSystemInterface::GetPrivateStaticClass()
{
	using TClass = UActorTracking2DSystemInterface;
	if (!Z_Registration_Info_UClass_UActorTracking2DSystemInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorTracking2DSystemInterface"),
			Z_Registration_Info_UClass_UActorTracking2DSystemInterface.InnerSingleton,
			StaticRegisterNativesUActorTracking2DSystemInterface,
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
	return Z_Registration_Info_UClass_UActorTracking2DSystemInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorTracking2DSystemInterface_NoRegister()
{
	return UActorTracking2DSystemInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorTracking2DSystemInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorTracking2DSystemInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IActorTracking2DSystemInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorTracking2DSystemInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DSystemInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTracking2DSystemInterface_Statics::ClassParams = {
	&UActorTracking2DSystemInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DSystemInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorTracking2DSystemInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorTracking2DSystemInterface()
{
	if (!Z_Registration_Info_UClass_UActorTracking2DSystemInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTracking2DSystemInterface.OuterSingleton, Z_Construct_UClass_UActorTracking2DSystemInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorTracking2DSystemInterface.OuterSingleton;
}
UActorTracking2DSystemInterface::UActorTracking2DSystemInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTracking2DSystemInterface);
// ********** End Interface UActorTracking2DSystemInterface ****************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorTracking2DSystemInterface, UActorTracking2DSystemInterface::StaticClass, TEXT("UActorTracking2DSystemInterface"), &Z_Registration_Info_UClass_UActorTracking2DSystemInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTracking2DSystemInterface), 3643553474U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h__Script_ActorTrackingSystem2D_2393378937(TEXT("/Script/ActorTrackingSystem2D"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h__Script_ActorTrackingSystem2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DSystemInterface_h__Script_ActorTrackingSystem2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
