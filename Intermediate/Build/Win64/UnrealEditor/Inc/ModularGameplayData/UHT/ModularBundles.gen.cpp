// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/ModularBundles.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularBundles() {}

// Begin Cross Module References
MODULARGAMEPLAYDATA_API UScriptStruct* Z_Construct_UScriptStruct_FModularBundles();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin ScriptStruct FModularBundles
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModularBundles;
class UScriptStruct* FModularBundles::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModularBundles.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModularBundles.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModularBundles, (UObject*)Z_Construct_UPackage__Script_ModularGameplayData(), TEXT("ModularBundles"));
	}
	return Z_Registration_Info_UScriptStruct_ModularBundles.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UScriptStruct* StaticStruct<FModularBundles>()
{
	return FModularBundles::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModularBundles_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ModularBundles.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModularBundles>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModularBundles_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
	nullptr,
	&NewStructOps,
	"ModularBundles",
	nullptr,
	0,
	sizeof(FModularBundles),
	alignof(FModularBundles),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModularBundles_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModularBundles_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModularBundles()
{
	if (!Z_Registration_Info_UScriptStruct_ModularBundles.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModularBundles.InnerSingleton, Z_Construct_UScriptStruct_FModularBundles_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModularBundles.InnerSingleton;
}
// End ScriptStruct FModularBundles

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ModularBundles_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FModularBundles::StaticStruct, Z_Construct_UScriptStruct_FModularBundles_Statics::NewStructOps, TEXT("ModularBundles"), &Z_Registration_Info_UScriptStruct_ModularBundles, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModularBundles), 1121458993U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ModularBundles_h_3794977521(TEXT("/Script/ModularGameplayData"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ModularBundles_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ModularBundles_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
