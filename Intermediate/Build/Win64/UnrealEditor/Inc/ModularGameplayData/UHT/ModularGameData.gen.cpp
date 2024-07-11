// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/DataAsset/ModularGameData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularGameData() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularGameData();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularGameData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin Class UModularGameData
void UModularGameData::StaticRegisterNativesUModularGameData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularGameData);
UClass* Z_Construct_UClass_UModularGameData_NoRegister()
{
	return UModularGameData::StaticClass();
}
struct Z_Construct_UClass_UModularGameData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Non-mutable data asset that contains global game data.\n */" },
#endif
		{ "DisplayName", "Modular Game Data" },
		{ "IncludePath", "DataAsset/ModularGameData.h" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularGameData.h" },
		{ "ShortTooltip", "Data asset containing global game data." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Non-mutable data asset that contains global game data." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularGameData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularGameData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularGameData_Statics::ClassParams = {
	&UModularGameData::StaticClass,
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
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularGameData_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularGameData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularGameData()
{
	if (!Z_Registration_Info_UClass_UModularGameData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularGameData.OuterSingleton, Z_Construct_UClass_UModularGameData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularGameData.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UModularGameData>()
{
	return UModularGameData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularGameData);
UModularGameData::~UModularGameData() {}
// End Class UModularGameData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularGameData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularGameData, UModularGameData::StaticClass, TEXT("UModularGameData"), &Z_Registration_Info_UClass_UModularGameData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularGameData), 2453942452U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularGameData_h_1797660323(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularGameData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularGameData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
