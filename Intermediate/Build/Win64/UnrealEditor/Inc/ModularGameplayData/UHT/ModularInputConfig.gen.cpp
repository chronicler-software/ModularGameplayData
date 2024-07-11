// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/DataAsset/ModularInputConfig.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularInputConfig() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularInputConfig();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularInputConfig_NoRegister();
MODULARGAMEPLAYDATA_API UScriptStruct* Z_Construct_UScriptStruct_FModularInputConfigAction();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin ScriptStruct FModularInputConfigAction
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularInputConfigAction;
class UScriptStruct* FModularInputConfigAction::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularInputConfigAction.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularInputConfigAction.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularInputConfigAction, (UObject*)Z_Construct_UPackage__Script_ModularGameplayData(), TEXT("ModularInputConfigAction"));
	}
	return Z_Registration_Info_UScriptStruct_ModularInputConfigAction.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UScriptStruct* StaticStruct<FModularInputConfigAction>()
{
	return FModularInputConfigAction::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularInputConfigAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Maps an input action to a gameplay input tag.\n */" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps an input action to a gameplay input tag." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputAction_MetaData[] = {
		{ "Category", "ModularInputConfigAction" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
		{ "NativeConstTemplateArg", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputTag_MetaData[] = {
		{ "Categories", "InputTag" },
		{ "Category", "ModularInputConfigAction" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputAction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularInputConfigAction>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::NewProp_InputAction = { "InputAction", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularInputConfigAction, InputAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputAction_MetaData), NewProp_InputAction_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::NewProp_InputTag = { "InputTag", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModularInputConfigAction, InputTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputTag_MetaData), NewProp_InputTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::NewProp_InputAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::NewProp_InputTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
	nullptr,
	&NewStructOps,
	"ModularInputConfigAction",
	Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::PropPointers),
	sizeof(FModularInputConfigAction),
	alignof(FModularInputConfigAction),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularInputConfigAction()
{
	if (!Z_Registration_Info_UScriptStruct_ModularInputConfigAction.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularInputConfigAction.InnerSingleton, Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularInputConfigAction.InnerSingleton;
}
// End ScriptStruct FModularInputConfigAction

// Begin Class UModularInputConfig Function FindAbilityInputActionForTag
struct Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics
{
	struct ModularInputConfig_eventFindAbilityInputActionForTag_Parms
	{
		FGameplayTag InputGameplayTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputGameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputGameplayTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputGameplayTag = { "InputGameplayTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularInputConfig_eventFindAbilityInputActionForTag_Parms, InputGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputGameplayTag_MetaData), NewProp_InputGameplayTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((ModularInputConfig_eventFindAbilityInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularInputConfig_eventFindAbilityInputActionForTag_Parms), &Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularInputConfig_eventFindAbilityInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_InputGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularInputConfig, nullptr, "FindAbilityInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::ModularInputConfig_eventFindAbilityInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::ModularInputConfig_eventFindAbilityInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularInputConfig::execFindAbilityInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputGameplayTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindAbilityInputActionForTag(Z_Param_Out_InputGameplayTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// End Class UModularInputConfig Function FindAbilityInputActionForTag

// Begin Class UModularInputConfig Function FindNativeInputActionForTag
struct Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics
{
	struct ModularInputConfig_eventFindNativeInputActionForTag_Parms
	{
		FGameplayTag InputGameplayTag;
		bool bLogNotFound;
		const UInputAction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Pawn" },
		{ "CPP_Default_bLogNotFound", "true" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputGameplayTag_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputGameplayTag;
	static void NewProp_bLogNotFound_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLogNotFound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputGameplayTag = { "InputGameplayTag", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularInputConfig_eventFindNativeInputActionForTag_Parms, InputGameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputGameplayTag_MetaData), NewProp_InputGameplayTag_MetaData) }; // 1298103297
void Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit(void* Obj)
{
	((ModularInputConfig_eventFindNativeInputActionForTag_Parms*)Obj)->bLogNotFound = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound = { "bLogNotFound", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ModularInputConfig_eventFindNativeInputActionForTag_Parms), &Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ModularInputConfig_eventFindNativeInputActionForTag_Parms, ReturnValue), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_InputGameplayTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_bLogNotFound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UModularInputConfig, nullptr, "FindNativeInputActionForTag", nullptr, nullptr, Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::ModularInputConfig_eventFindNativeInputActionForTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::ModularInputConfig_eventFindNativeInputActionForTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UModularInputConfig::execFindNativeInputActionForTag)
{
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_InputGameplayTag);
	P_GET_UBOOL(Z_Param_bLogNotFound);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(const UInputAction**)Z_Param__Result=P_THIS->FindNativeInputActionForTag(Z_Param_Out_InputGameplayTag,Z_Param_bLogNotFound);
	P_NATIVE_END;
}
// End Class UModularInputConfig Function FindNativeInputActionForTag

// Begin Class UModularInputConfig
void UModularInputConfig::StaticRegisterNativesUModularInputConfig()
{
	UClass* Class = UModularInputConfig::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindAbilityInputActionForTag", &UModularInputConfig::execFindAbilityInputActionForTag },
		{ "FindNativeInputActionForTag", &UModularInputConfig::execFindNativeInputActionForTag },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularInputConfig);
UClass* Z_Construct_UClass_UModularInputConfig_NoRegister()
{
	return UModularInputConfig::StaticClass();
}
struct Z_Construct_UClass_UModularInputConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "DataAsset/ModularInputConfig.h" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NativeInputActions_MetaData[] = {
		{ "Category", "ModularInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Input actions mapped to a gameplay tag.\n\x09 *\n\x09 * These must be manually bound.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input actions mapped to a gameplay tag.\n\nThese must be manually bound." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbilityInputActions_MetaData[] = {
		{ "Category", "ModularInputConfig" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Input actions mapped to a gameplay tag.\n\x09 *\n\x09 * These are automatically bound to abilities with matching input tags.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularInputConfig.h" },
		{ "TitleProperty", "InputAction" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input actions mapped to a gameplay tag.\n\nThese are automatically bound to abilities with matching input tags." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NativeInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NativeInputActions;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AbilityInputActions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AbilityInputActions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UModularInputConfig_FindAbilityInputActionForTag, "FindAbilityInputActionForTag" }, // 873152308
		{ &Z_Construct_UFunction_UModularInputConfig_FindNativeInputActionForTag, "FindNativeInputActionForTag" }, // 1289327836
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularInputConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularInputConfig_Statics::NewProp_NativeInputActions_Inner = { "NativeInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularInputConfigAction, METADATA_PARAMS(0, nullptr) }; // 2849566549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularInputConfig_Statics::NewProp_NativeInputActions = { "NativeInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularInputConfig, NativeInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NativeInputActions_MetaData), NewProp_NativeInputActions_MetaData) }; // 2849566549
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularInputConfig_Statics::NewProp_AbilityInputActions_Inner = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FModularInputConfigAction, METADATA_PARAMS(0, nullptr) }; // 2849566549
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UModularInputConfig_Statics::NewProp_AbilityInputActions = { "AbilityInputActions", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularInputConfig, AbilityInputActions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbilityInputActions_MetaData), NewProp_AbilityInputActions_MetaData) }; // 2849566549
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularInputConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularInputConfig_Statics::NewProp_NativeInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularInputConfig_Statics::NewProp_NativeInputActions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularInputConfig_Statics::NewProp_AbilityInputActions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularInputConfig_Statics::NewProp_AbilityInputActions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularInputConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularInputConfig_Statics::ClassParams = {
	&UModularInputConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UModularInputConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputConfig_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularInputConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularInputConfig()
{
	if (!Z_Registration_Info_UClass_UModularInputConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularInputConfig.OuterSingleton, Z_Construct_UClass_UModularInputConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularInputConfig.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UModularInputConfig>()
{
	return UModularInputConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularInputConfig);
UModularInputConfig::~UModularInputConfig() {}
// End Class UModularInputConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularInputConfigAction::StaticStruct, Z_Construct_UScriptStruct_FModularInputConfigAction_Statics::NewStructOps, TEXT("ModularInputConfigAction"), &Z_Registration_Info_UScriptStruct_ModularInputConfigAction, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularInputConfigAction), 2849566549U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularInputConfig, UModularInputConfig::StaticClass, TEXT("UModularInputConfig"), &Z_Registration_Info_UClass_UModularInputConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularInputConfig), 1581824251U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_1853203505(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
