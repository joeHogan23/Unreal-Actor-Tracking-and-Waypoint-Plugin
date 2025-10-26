// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTracking2DComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTracking2DComponent() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DComponent();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UActorTracking2DComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UActorTracking2DComponent ************************************************
void UActorTracking2DComponent::StaticRegisterNativesUActorTracking2DComponent()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UActorTracking2DComponent;
UClass* UActorTracking2DComponent::GetPrivateStaticClass()
{
	using TClass = UActorTracking2DComponent;
	if (!Z_Registration_Info_UClass_UActorTracking2DComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("ActorTracking2DComponent"),
			Z_Registration_Info_UClass_UActorTracking2DComponent.InnerSingleton,
			StaticRegisterNativesUActorTracking2DComponent,
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
	return Z_Registration_Info_UClass_UActorTracking2DComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UActorTracking2DComponent_NoRegister()
{
	return UActorTracking2DComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UActorTracking2DComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "ActorTracking2DComponent.h" },
		{ "ModuleRelativePath", "Public/ActorTracking2DComponent.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActorTracking2DComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UActorTracking2DComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UActorTracking2DComponent_Statics::ClassParams = {
	&UActorTracking2DComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UActorTracking2DComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UActorTracking2DComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UActorTracking2DComponent()
{
	if (!Z_Registration_Info_UClass_UActorTracking2DComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UActorTracking2DComponent.OuterSingleton, Z_Construct_UClass_UActorTracking2DComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UActorTracking2DComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UActorTracking2DComponent);
UActorTracking2DComponent::~UActorTracking2DComponent() {}
// ********** End Class UActorTracking2DComponent **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DComponent_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UActorTracking2DComponent, UActorTracking2DComponent::StaticClass, TEXT("UActorTracking2DComponent"), &Z_Registration_Info_UClass_UActorTracking2DComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UActorTracking2DComponent), 1342120493U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DComponent_h__Script_ActorTrackingSystem2D_3721711692(TEXT("/Script/ActorTrackingSystem2D"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DComponent_h__Script_ActorTrackingSystem2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTracking2DComponent_h__Script_ActorTrackingSystem2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
