// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/EnhancedInput/ModularInputModifiers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularInputModifiers() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputModifier();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularSettingBasedScalar();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularSettingBasedScalar_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin Class UModularSettingBasedScalar
void UModularSettingBasedScalar::StaticRegisterNativesUModularSettingBasedScalar()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularSettingBasedScalar);
UClass* Z_Construct_UClass_UModularSettingBasedScalar_NoRegister()
{
	return UModularSettingBasedScalar::StaticClass();
}
struct Z_Construct_UClass_UModularSettingBasedScalar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n*  Scales input based on a double property in the SharedUserSettings.\n*/" },
#endif
		{ "DisplayName", "Setting Based Scalar" },
		{ "IncludePath", "EnhancedInput/ModularInputModifiers.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/EnhancedInput/ModularInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Scales input based on a double property in the SharedUserSettings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_XAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the property that will be used to clamp the X Axis of this value */" },
#endif
		{ "ModuleRelativePath", "Public/EnhancedInput/ModularInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the property that will be used to clamp the X Axis of this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_YAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the property that will be used to clamp the Y Axis of this value */" },
#endif
		{ "ModuleRelativePath", "Public/EnhancedInput/ModularInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the property that will be used to clamp the Y Axis of this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZAxisScalarSettingName_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of the property that will be used to clamp the Z Axis of this value */" },
#endif
		{ "ModuleRelativePath", "Public/EnhancedInput/ModularInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the property that will be used to clamp the Z Axis of this value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxValueClamp_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the maximum value of this setting on each axis. */" },
#endif
		{ "ModuleRelativePath", "Public/EnhancedInput/ModularInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the maximum value of this setting on each axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinValueClamp_MetaData[] = {
		{ "Category", "Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Set the minimum value of this setting on each axis. */" },
#endif
		{ "ModuleRelativePath", "Public/EnhancedInput/ModularInputModifiers.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set the minimum value of this setting on each axis." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_XAxisScalarSettingName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_YAxisScalarSettingName;
	static const UECodeGen_Private::FNamePropertyParams NewProp_ZAxisScalarSettingName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxValueClamp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MinValueClamp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularSettingBasedScalar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName = { "XAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettingBasedScalar, XAxisScalarSettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_XAxisScalarSettingName_MetaData), NewProp_XAxisScalarSettingName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName = { "YAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettingBasedScalar, YAxisScalarSettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_YAxisScalarSettingName_MetaData), NewProp_YAxisScalarSettingName_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName = { "ZAxisScalarSettingName", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettingBasedScalar, ZAxisScalarSettingName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZAxisScalarSettingName_MetaData), NewProp_ZAxisScalarSettingName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_MaxValueClamp = { "MaxValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettingBasedScalar, MaxValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxValueClamp_MetaData), NewProp_MaxValueClamp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_MinValueClamp = { "MinValueClamp", nullptr, (EPropertyFlags)0x0010000000000805, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularSettingBasedScalar, MinValueClamp), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinValueClamp_MetaData), NewProp_MinValueClamp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularSettingBasedScalar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_XAxisScalarSettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_YAxisScalarSettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_ZAxisScalarSettingName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_MaxValueClamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularSettingBasedScalar_Statics::NewProp_MinValueClamp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettingBasedScalar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularSettingBasedScalar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInputModifier,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettingBasedScalar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularSettingBasedScalar_Statics::ClassParams = {
	&UModularSettingBasedScalar::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularSettingBasedScalar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettingBasedScalar_Statics::PropPointers),
	0,
	0x400830A2u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularSettingBasedScalar_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularSettingBasedScalar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularSettingBasedScalar()
{
	if (!Z_Registration_Info_UClass_UModularSettingBasedScalar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularSettingBasedScalar.OuterSingleton, Z_Construct_UClass_UModularSettingBasedScalar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularSettingBasedScalar.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UModularSettingBasedScalar>()
{
	return UModularSettingBasedScalar::StaticClass();
}
UModularSettingBasedScalar::UModularSettingBasedScalar(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularSettingBasedScalar);
UModularSettingBasedScalar::~UModularSettingBasedScalar() {}
// End Class UModularSettingBasedScalar

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_EnhancedInput_ModularInputModifiers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularSettingBasedScalar, UModularSettingBasedScalar::StaticClass, TEXT("UModularSettingBasedScalar"), &Z_Registration_Info_UClass_UModularSettingBasedScalar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularSettingBasedScalar), 3042684025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_EnhancedInput_ModularInputModifiers_h_1168053481(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_EnhancedInput_ModularInputModifiers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_EnhancedInput_ModularInputModifiers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
