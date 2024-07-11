// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/GameFeature/GameFeatureAction_AddInputContextMapping.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_AddInputContextMapping() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_NoRegister();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
MODULARGAMEPLAYDATA_API UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin ScriptStruct FInputMappingContextAndPriority
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority;
class UScriptStruct* FInputMappingContextAndPriority::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputMappingContextAndPriority, (UObject*)Z_Construct_UPackage__Script_ModularGameplayData(), TEXT("InputMappingContextAndPriority"));
	}
	return Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UScriptStruct* StaticStruct<FInputMappingContextAndPriority>()
{
	return FInputMappingContextAndPriority::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_AddInputContextMapping.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMapping_MetaData[] = {
		{ "AssetBundles", "Client,Server" },
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * InputMappings have to be loaded with AssetManager.GetAsset() before they can be referenced with .Get().\n\x09 *\n\x09 * @todo Figure a way to make this automatic.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_AddInputContextMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InputMappings have to be loaded with AssetManager.GetAsset() before they can be referenced with .Get().\n\n@todo Figure a way to make this automatic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Priority_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Higher priority input mappings will be prioritized over mappings with a lower priority.\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_AddInputContextMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Higher priority input mappings will be prioritized over mappings with a lower priority." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRegisterWithSettings_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, then this mapping context will be registered with the settings when this game feature action is registered. */" },
#endif
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_AddInputContextMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, then this mapping context will be registered with the settings when this game feature action is registered." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_InputMapping;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Priority;
	static void NewProp_bRegisterWithSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRegisterWithSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputMappingContextAndPriority>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping = { "InputMapping", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingContextAndPriority, InputMapping), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMapping_MetaData), NewProp_InputMapping_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority = { "Priority", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInputMappingContextAndPriority, Priority), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Priority_MetaData), NewProp_Priority_MetaData) };
void Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_bRegisterWithSettings_SetBit(void* Obj)
{
	((FInputMappingContextAndPriority*)Obj)->bRegisterWithSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_bRegisterWithSettings = { "bRegisterWithSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FInputMappingContextAndPriority), &Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_bRegisterWithSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRegisterWithSettings_MetaData), NewProp_bRegisterWithSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_InputMapping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_Priority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewProp_bRegisterWithSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
	nullptr,
	&NewStructOps,
	"InputMappingContextAndPriority",
	Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::PropPointers),
	sizeof(FInputMappingContextAndPriority),
	alignof(FInputMappingContextAndPriority),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInputMappingContextAndPriority()
{
	if (!Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.InnerSingleton, Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority.InnerSingleton;
}
// End ScriptStruct FInputMappingContextAndPriority

// Begin Class UGameFeatureAction_AddInputContextMapping
void UGameFeatureAction_AddInputContextMapping::StaticRegisterNativesUGameFeatureAction_AddInputContextMapping()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_AddInputContextMapping);
UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_NoRegister()
{
	return UGameFeatureAction_AddInputContextMapping::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Adds InputMappingContext to local players' EnhancedInput system. \n * Expects that local players are set up to use the EnhancedInput system.\n */" },
#endif
		{ "DisplayName", "Add Input Mapping" },
		{ "IncludePath", "GameFeature/GameFeatureAction_AddInputContextMapping.h" },
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_AddInputContextMapping.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds InputMappingContext to local players' EnhancedInput system.\nExpects that local players are set up to use the EnhancedInput system." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappings_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~End of UObject interface\n" },
#endif
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_AddInputContextMapping.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputMappings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InputMappings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_AddInputContextMapping>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_Inner = { "InputMappings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FInputMappingContextAndPriority, METADATA_PARAMS(0, nullptr) }; // 2636457257
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings = { "InputMappings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameFeatureAction_AddInputContextMapping, InputMappings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappings_MetaData), NewProp_InputMappings_MetaData) }; // 2636457257
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::NewProp_InputMappings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction_WorldActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::ClassParams = {
	&UGameFeatureAction_AddInputContextMapping::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::PropPointers),
	0,
	0x002810A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UGameFeatureAction_AddInputContextMapping>()
{
	return UGameFeatureAction_AddInputContextMapping::StaticClass();
}
UGameFeatureAction_AddInputContextMapping::UGameFeatureAction_AddInputContextMapping(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_AddInputContextMapping);
UGameFeatureAction_AddInputContextMapping::~UGameFeatureAction_AddInputContextMapping() {}
// End Class UGameFeatureAction_AddInputContextMapping

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_AddInputContextMapping_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FInputMappingContextAndPriority::StaticStruct, Z_Construct_UScriptStruct_FInputMappingContextAndPriority_Statics::NewStructOps, TEXT("InputMappingContextAndPriority"), &Z_Registration_Info_UScriptStruct_InputMappingContextAndPriority, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputMappingContextAndPriority), 2636457257U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_AddInputContextMapping, UGameFeatureAction_AddInputContextMapping::StaticClass, TEXT("UGameFeatureAction_AddInputContextMapping"), &Z_Registration_Info_UClass_UGameFeatureAction_AddInputContextMapping, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_AddInputContextMapping), 4262846598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_AddInputContextMapping_h_899966727(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_AddInputContextMapping_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_AddInputContextMapping_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_AddInputContextMapping_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
