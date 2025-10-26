// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TrackingWidgetInterface.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTrackingWidgetInterface() {}

// ********** Begin Cross Module References ********************************************************
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UTrackingWidgetInterface();
ACTORTRACKINGSYSTEM2D_API UClass* Z_Construct_UClass_UTrackingWidgetInterface_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
UPackage* Z_Construct_UPackage__Script_ActorTrackingSystem2D();
// ********** End Cross Module References **********************************************************

// ********** Begin Interface UTrackingWidgetInterface Function CanKillOnTimeRemainingElapsed ******
struct TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms()
		: ReturnValue(false)
	{
	}
};
bool ITrackingWidgetInterface::CanKillOnTimeRemainingElapsed() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanKillOnTimeRemainingElapsed instead.");
	TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed = FName(TEXT("CanKillOnTimeRemainingElapsed"));
bool ITrackingWidgetInterface::Execute_CanKillOnTimeRemainingElapsed(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTrackingWidgetInterface::StaticClass()));
	TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const ITrackingWidgetInterface*)(O->GetNativeInterfaceAddress(UTrackingWidgetInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanKillOnTimeRemainingElapsed_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrackingWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms), &Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrackingWidgetInterface, nullptr, "CanKillOnTimeRemainingElapsed", Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::PropPointers), sizeof(TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrackingWidgetInterface_eventCanKillOnTimeRemainingElapsed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITrackingWidgetInterface::execCanKillOnTimeRemainingElapsed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanKillOnTimeRemainingElapsed_Implementation();
	P_NATIVE_END;
}
// ********** End Interface UTrackingWidgetInterface Function CanKillOnTimeRemainingElapsed ********

// ********** Begin Interface UTrackingWidgetInterface Function SetTrackerData *********************
struct TrackingWidgetInterface_eventSetTrackerData_Parms
{
	AActor* Tracked;
	UObject* ContextObject;
	FGameplayTagContainer InContextTags;
};
void ITrackingWidgetInterface::SetTrackerData(AActor* Tracked, UObject* ContextObject, FGameplayTagContainer const& InContextTags)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetTrackerData instead.");
}
static FName NAME_UTrackingWidgetInterface_SetTrackerData = FName(TEXT("SetTrackerData"));
void ITrackingWidgetInterface::Execute_SetTrackerData(UObject* O, AActor* Tracked, UObject* ContextObject, FGameplayTagContainer const& InContextTags)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTrackingWidgetInterface::StaticClass()));
	TrackingWidgetInterface_eventSetTrackerData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTrackingWidgetInterface_SetTrackerData);
	if (Func)
	{
		Parms.Tracked=Tracked;
		Parms.ContextObject=ContextObject;
		Parms.InContextTags=InContextTags;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITrackingWidgetInterface*)(O->GetNativeInterfaceAddress(UTrackingWidgetInterface::StaticClass())))
	{
		I->SetTrackerData_Implementation(Tracked,ContextObject,InContextTags);
	}
}
struct Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrackingWidgetInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InContextTags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Tracked;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InContextTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::NewProp_Tracked = { "Tracked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackingWidgetInterface_eventSetTrackerData_Parms, Tracked), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::NewProp_ContextObject = { "ContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackingWidgetInterface_eventSetTrackerData_Parms, ContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::NewProp_InContextTags = { "InContextTags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackingWidgetInterface_eventSetTrackerData_Parms, InContextTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InContextTags_MetaData), NewProp_InContextTags_MetaData) }; // 2104890724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::NewProp_Tracked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::NewProp_ContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::NewProp_InContextTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrackingWidgetInterface, nullptr, "SetTrackerData", Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::PropPointers), sizeof(TrackingWidgetInterface_eventSetTrackerData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrackingWidgetInterface_eventSetTrackerData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITrackingWidgetInterface::execSetTrackerData)
{
	P_GET_OBJECT(AActor,Z_Param_Tracked);
	P_GET_OBJECT(UObject,Z_Param_ContextObject);
	P_GET_STRUCT_REF(FGameplayTagContainer,Z_Param_Out_InContextTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetTrackerData_Implementation(Z_Param_Tracked,Z_Param_ContextObject,Z_Param_Out_InContextTags);
	P_NATIVE_END;
}
// ********** End Interface UTrackingWidgetInterface Function SetTrackerData ***********************

// ********** Begin Interface UTrackingWidgetInterface Function TrackerTick ************************
struct TrackingWidgetInterface_eventTrackerTick_Parms
{
	float DeltaTime;
	bool IsInViewport;
	FVector2D ScreenPosition;
};
void ITrackingWidgetInterface::TrackerTick(float DeltaTime, bool IsInViewport, FVector2D const& ScreenPosition)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TrackerTick instead.");
}
static FName NAME_UTrackingWidgetInterface_TrackerTick = FName(TEXT("TrackerTick"));
void ITrackingWidgetInterface::Execute_TrackerTick(UObject* O, float DeltaTime, bool IsInViewport, FVector2D const& ScreenPosition)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UTrackingWidgetInterface::StaticClass()));
	TrackingWidgetInterface_eventTrackerTick_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UTrackingWidgetInterface_TrackerTick);
	if (Func)
	{
		Parms.DeltaTime=DeltaTime;
		Parms.IsInViewport=IsInViewport;
		Parms.ScreenPosition=ScreenPosition;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (ITrackingWidgetInterface*)(O->GetNativeInterfaceAddress(UTrackingWidgetInterface::StaticClass())))
	{
		I->TrackerTick_Implementation(DeltaTime,IsInViewport,ScreenPosition);
	}
}
struct Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrackingWidgetInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsInViewport_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ScreenPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_IsInViewport_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsInViewport;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ScreenPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackingWidgetInterface_eventTrackerTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_IsInViewport_SetBit(void* Obj)
{
	((TrackingWidgetInterface_eventTrackerTick_Parms*)Obj)->IsInViewport = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_IsInViewport = { "IsInViewport", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TrackingWidgetInterface_eventTrackerTick_Parms), &Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_IsInViewport_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsInViewport_MetaData), NewProp_IsInViewport_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_ScreenPosition = { "ScreenPosition", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TrackingWidgetInterface_eventTrackerTick_Parms, ScreenPosition), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ScreenPosition_MetaData), NewProp_ScreenPosition_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_IsInViewport,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::NewProp_ScreenPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTrackingWidgetInterface, nullptr, "TrackerTick", Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::PropPointers), sizeof(TrackingWidgetInterface_eventTrackerTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(TrackingWidgetInterface_eventTrackerTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ITrackingWidgetInterface::execTrackerTick)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_IsInViewport);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ScreenPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TrackerTick_Implementation(Z_Param_DeltaTime,Z_Param_IsInViewport,Z_Param_Out_ScreenPosition);
	P_NATIVE_END;
}
// ********** End Interface UTrackingWidgetInterface Function TrackerTick **************************

// ********** Begin Interface UTrackingWidgetInterface *********************************************
void UTrackingWidgetInterface::StaticRegisterNativesUTrackingWidgetInterface()
{
	UClass* Class = UTrackingWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanKillOnTimeRemainingElapsed", &ITrackingWidgetInterface::execCanKillOnTimeRemainingElapsed },
		{ "SetTrackerData", &ITrackingWidgetInterface::execSetTrackerData },
		{ "TrackerTick", &ITrackingWidgetInterface::execTrackerTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTrackingWidgetInterface;
UClass* UTrackingWidgetInterface::GetPrivateStaticClass()
{
	using TClass = UTrackingWidgetInterface;
	if (!Z_Registration_Info_UClass_UTrackingWidgetInterface.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TrackingWidgetInterface"),
			Z_Registration_Info_UClass_UTrackingWidgetInterface.InnerSingleton,
			StaticRegisterNativesUTrackingWidgetInterface,
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
	return Z_Registration_Info_UClass_UTrackingWidgetInterface.InnerSingleton;
}
UClass* Z_Construct_UClass_UTrackingWidgetInterface_NoRegister()
{
	return UTrackingWidgetInterface::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTrackingWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TrackingWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTrackingWidgetInterface_CanKillOnTimeRemainingElapsed, "CanKillOnTimeRemainingElapsed" }, // 761196760
		{ &Z_Construct_UFunction_UTrackingWidgetInterface_SetTrackerData, "SetTrackerData" }, // 1829292476
		{ &Z_Construct_UFunction_UTrackingWidgetInterface_TrackerTick, "TrackerTick" }, // 1025112992
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ITrackingWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTrackingWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_ActorTrackingSystem2D,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackingWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTrackingWidgetInterface_Statics::ClassParams = {
	&UTrackingWidgetInterface::StaticClass,
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
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTrackingWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UTrackingWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTrackingWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UTrackingWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTrackingWidgetInterface.OuterSingleton, Z_Construct_UClass_UTrackingWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTrackingWidgetInterface.OuterSingleton;
}
UTrackingWidgetInterface::UTrackingWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTrackingWidgetInterface);
// ********** End Interface UTrackingWidgetInterface ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h__Script_ActorTrackingSystem2D_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTrackingWidgetInterface, UTrackingWidgetInterface::StaticClass, TEXT("UTrackingWidgetInterface"), &Z_Registration_Info_UClass_UTrackingWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTrackingWidgetInterface), 1234032652U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h__Script_ActorTrackingSystem2D_685112458(TEXT("/Script/ActorTrackingSystem2D"),
	Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h__Script_ActorTrackingSystem2D_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TSC_ProjectDeep_Plugins_ActorTrackingSystem2D_Source_ActorTrackingSystem2D_Public_TrackingWidgetInterface_h__Script_ActorTrackingSystem2D_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
