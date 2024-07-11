// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/DataAsset/ModularPawnData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularPawnData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularInputConfig_NoRegister();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularPawnData();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin Class UModularPawnData
void UModularPawnData::StaticRegisterNativesUModularPawnData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularPawnData);
UClass* Z_Construct_UClass_UModularPawnData_NoRegister()
{
	return UModularPawnData::StaticClass();
}
struct Z_Construct_UClass_UModularPawnData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UModularPawnData\n *\n *\x09Non-mutable data asset that contains properties used to define a pawn.\n */" },
#endif
		{ "DisplayName", "Pawn Data" },
		{ "IncludePath", "DataAsset/ModularPawnData.h" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularPawnData.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShortTooltip", "Data asset used to define a Pawn." },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModularPawnData\n\n    Non-mutable data asset that contains properties used to define a pawn." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnClass_MetaData[] = {
		{ "Category", "Pawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Class to instantiate for this pawn (should usually derive from AModularPawn or AModularCharacter).\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Class to instantiate for this pawn (should usually derive from AModularPawn or AModularCharacter)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputConfig_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Input configuration used by player controlled pawns to create input mappings and bind input actions.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularPawnData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input configuration used by player controlled pawns to create input mappings and bind input actions." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_PawnClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputConfig;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularPawnData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModularPawnData_Statics::NewProp_PawnClass = { "PawnClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularPawnData, PawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnClass_MetaData), NewProp_PawnClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularPawnData_Statics::NewProp_InputConfig = { "InputConfig", nullptr, (EPropertyFlags)0x0114000000010015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularPawnData, InputConfig), Z_Construct_UClass_UModularInputConfig_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputConfig_MetaData), NewProp_InputConfig_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularPawnData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularPawnData_Statics::NewProp_PawnClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularPawnData_Statics::NewProp_InputConfig,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularPawnData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UPrimaryDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularPawnData_Statics::ClassParams = {
	&UModularPawnData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularPawnData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnData_Statics::PropPointers),
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularPawnData_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularPawnData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularPawnData()
{
	if (!Z_Registration_Info_UClass_UModularPawnData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularPawnData.OuterSingleton, Z_Construct_UClass_UModularPawnData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularPawnData.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UModularPawnData>()
{
	return UModularPawnData::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularPawnData);
UModularPawnData::~UModularPawnData() {}
// End Class UModularPawnData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularPawnData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularPawnData, UModularPawnData::StaticClass, TEXT("UModularPawnData"), &Z_Registration_Info_UClass_UModularPawnData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularPawnData), 4281077267U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularPawnData_h_1903419290(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularPawnData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularPawnData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
