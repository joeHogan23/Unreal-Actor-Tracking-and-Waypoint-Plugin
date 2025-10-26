// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ActorTrackingDescriptor.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeActorTrackingDescriptor() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UEnum* Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingDescriptor();
ACTORTRACKINGSYSTEM2D_API UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpec();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FActorTrackingDescriptor ******************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor;
class UScriptStruct* FActorTrackingDescriptor::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTrackingDescriptor, (UObject*)Z_Construct_UPackage__Script_ActorTrackingSystem2D(), TEXT("ActorTrackingDescriptor"));
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedUniqueId_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackerPivotCoords_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Contexts_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VisibilityTags_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LocationOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocationScalar_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistanceRange_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DrawDistanceFallOffRate_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
		{ "EditCondition", "DrawDistanceRange > 0" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSpan_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingDescriptor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//If -1, Tracker has no lifespan\n" },
#endif
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If -1, Tracker has no lifespan" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_TrackedUniqueId;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SocketName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TrackerPivotCoords;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Contexts;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VisibilityTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LocationOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocationScalar;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDistanceRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DrawDistanceFallOffRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LifeSpan;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTrackingDescriptor>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_TrackedUniqueId = { "TrackedUniqueId", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, TrackedUniqueId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedUniqueId_MetaData), NewProp_TrackedUniqueId_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, SocketName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SocketName_MetaData), NewProp_SocketName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_TrackerPivotCoords = { "TrackerPivotCoords", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, TrackerPivotCoords), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackerPivotCoords_MetaData), NewProp_TrackerPivotCoords_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_Contexts = { "Contexts", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, Contexts), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Contexts_MetaData), NewProp_Contexts_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_VisibilityTags = { "VisibilityTags", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, VisibilityTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VisibilityTags_MetaData), NewProp_VisibilityTags_MetaData) }; // 2104890724
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_LocationOffset = { "LocationOffset", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, LocationOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LocationOffset_MetaData), NewProp_LocationOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_WorldLocationScalar = { "WorldLocationScalar", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, WorldLocationScalar), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocationScalar_MetaData), NewProp_WorldLocationScalar_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_DrawDistanceRange = { "DrawDistanceRange", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, DrawDistanceRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDistanceRange_MetaData), NewProp_DrawDistanceRange_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_DrawDistanceFallOffRate = { "DrawDistanceFallOffRate", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, DrawDistanceFallOffRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DrawDistanceFallOffRate_MetaData), NewProp_DrawDistanceFallOffRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_LifeSpan = { "LifeSpan", nullptr, (EPropertyFlags)0x0040040000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingDescriptor, LifeSpan), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSpan_MetaData), NewProp_LifeSpan_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_TrackedUniqueId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_SocketName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_TrackerPivotCoords,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_Contexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_VisibilityTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_LocationOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_WorldLocationScalar,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_DrawDistanceRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_DrawDistanceFallOffRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewProp_LifeSpan,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
	nullptr,
	&NewStructOps,
	"ActorTrackingDescriptor",
	Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::PropPointers),
	sizeof(FActorTrackingDescriptor),
	alignof(FActorTrackingDescriptor),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingDescriptor()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor.InnerSingleton, Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor.InnerSingleton;
}
// ********** End ScriptStruct FActorTrackingDescriptor ********************************************

// ********** Begin Enum ETrackingType *************************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ETrackingType;
static UEnum* ETrackingType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ETrackingType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ETrackingType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType, (UObject*)Z_Construct_UPackage__Script_ActorTrackingSystem2D(), TEXT("ETrackingType"));
	}
	return Z_Registration_Info_UEnum_ETrackingType.OuterSingleton;
}
template<> ACTORTRACKINGSYSTEM2D_API UEnum* StaticEnum<ETrackingType>()
{
	return ETrackingType_StaticEnum();
}
struct Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Actor.Name", "ETrackingType::Actor" },
		{ "BlueprintType", "true" },
		{ "Component.Name", "ETrackingType::Component" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
		{ "Socket.Name", "ETrackingType::Socket" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ETrackingType::Actor", (int64)ETrackingType::Actor },
		{ "ETrackingType::Component", (int64)ETrackingType::Component },
		{ "ETrackingType::Socket", (int64)ETrackingType::Socket },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
	nullptr,
	"ETrackingType",
	"ETrackingType",
	Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType()
{
	if (!Z_Registration_Info_UEnum_ETrackingType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ETrackingType.InnerSingleton, Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ETrackingType.InnerSingleton;
}
// ********** End Enum ETrackingType ***************************************************************

// ********** Begin ScriptStruct FActorTrackingSpec ************************************************
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FActorTrackingSpec;
class UScriptStruct* FActorTrackingSpec::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingSpec.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FActorTrackingSpec.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorTrackingSpec, (UObject*)Z_Construct_UPackage__Script_ActorTrackingSystem2D(), TEXT("ActorTrackingSpec"));
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingSpec.OuterSingleton;
}
struct Z_Construct_UScriptStruct_FActorTrackingSpec_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedActor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackedComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingWidget_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextObject_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRebuildIfActive_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TrackingType_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ActorTrackingSpec" },
		{ "ModuleRelativePath", "Public/ActorTrackingDescriptor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedActor;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackedComponent;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_TrackingWidget;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Descriptor;
	static void NewProp_bRebuildIfActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRebuildIfActive;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TrackingType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TrackingType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorTrackingSpec>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackedActor = { "TrackedActor", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpec, TrackedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedActor_MetaData), NewProp_TrackedActor_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackedComponent = { "TrackedComponent", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpec, TrackedComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackedComponent_MetaData), NewProp_TrackedComponent_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackingWidget = { "TrackingWidget", nullptr, (EPropertyFlags)0x004400000008001c, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpec, TrackingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingWidget_MetaData), NewProp_TrackingWidget_MetaData) };
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0044000000000014, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpec, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextObject_MetaData), NewProp_ContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpec, Descriptor), Z_Construct_UScriptStruct_FActorTrackingDescriptor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Descriptor_MetaData), NewProp_Descriptor_MetaData) }; // 988682890
void Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_bRebuildIfActive_SetBit(void* Obj)
{
	((FActorTrackingSpec*)Obj)->bRebuildIfActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_bRebuildIfActive = { "bRebuildIfActive", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FActorTrackingSpec), &Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_bRebuildIfActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRebuildIfActive_MetaData), NewProp_bRebuildIfActive_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackingType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackingType = { "TrackingType", nullptr, (EPropertyFlags)0x0040000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FActorTrackingSpec, TrackingType), Z_Construct_UEnum_ActorTrackingSystem2D_ETrackingType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TrackingType_MetaData), NewProp_TrackingType_MetaData) }; // 1888690192
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackingWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_Descriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_bRebuildIfActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackingType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewProp_TrackingType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
	nullptr,
	&NewStructOps,
	"ActorTrackingSpec",
	Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::PropPointers),
	sizeof(FActorTrackingSpec),
	alignof(FActorTrackingSpec),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FActorTrackingSpec()
{
	if (!Z_Registration_Info_UScriptStruct_FActorTrackingSpec.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FActorTrackingSpec.InnerSingleton, Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_FActorTrackingSpec.InnerSingleton;
}
// ********** End ScriptStruct FActorTrackingSpec **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ETrackingType_StaticEnum, TEXT("ETrackingType"), &Z_Registration_Info_UEnum_ETrackingType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1888690192U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FActorTrackingDescriptor::StaticStruct, Z_Construct_UScriptStruct_FActorTrackingDescriptor_Statics::NewStructOps, TEXT("ActorTrackingDescriptor"), &Z_Registration_Info_UScriptStruct_FActorTrackingDescriptor, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorTrackingDescriptor), 988682890U) },
		{ FActorTrackingSpec::StaticStruct, Z_Construct_UScriptStruct_FActorTrackingSpec_Statics::NewStructOps, TEXT("ActorTrackingSpec"), &Z_Registration_Info_UScriptStruct_FActorTrackingSpec, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FActorTrackingSpec), 1653082114U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h__Script_ActorTrackingSystem2D_2906855764(TEXT("/Script/ActorTrackingSystem2D"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h__Script_ActorTrackingSystem2D_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h__Script_ActorTrackingSystem2D_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h__Script_ActorTrackingSystem2D_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_ActorTrackingDescriptor_h__Script_ActorTrackingSystem2D_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
