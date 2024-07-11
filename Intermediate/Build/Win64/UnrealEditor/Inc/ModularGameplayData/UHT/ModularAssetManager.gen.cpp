// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/DataAsset/ModularAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularAssetManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
ENGINE_API UClass* Z_Construct_UClass_UPrimaryDataAsset_NoRegister();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularAssetManager();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularAssetManager_NoRegister();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularGameData_NoRegister();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularPawnData_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin Class UModularAssetManager
void UModularAssetManager::StaticRegisterNativesUModularAssetManager()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularAssetManager);
UClass* Z_Construct_UClass_UModularAssetManager_NoRegister()
{
	return UModularAssetManager::StaticClass();
}
struct Z_Construct_UClass_UModularAssetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UModularAssetManager\n *\n *\x09Game implementation of the asset manager that overrides functionality and stores game-specific types.\n *\x09It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n *\x09This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini.\n */" },
#endif
		{ "IncludePath", "DataAsset/ModularAssetManager.h" },
		{ "ModuleRelativePath", "Public/DataAsset/ModularAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModularAssetManager\n\n    Game implementation of the asset manager that overrides functionality and stores game-specific types.\n    It is expected that most games will want to override AssetManager as it provides a good place for game-specific loading logic.\n    This class is used by setting 'AssetManagerClassName' in DefaultEngine.ini." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModularGameDataPath_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Global game data asset to use.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Global game data asset to use." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameDataMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Loaded version of the game data\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Loaded version of the game data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultPawnData_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pawn data used when spawning player pawns if there isn't one set on the player state.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn data used when spawning player pawns if there isn't one set on the player state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LoadedAssets_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Assets loaded and tracked by the asset manager.\n" },
#endif
		{ "ModuleRelativePath", "Public/DataAsset/ModularAssetManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Assets loaded and tracked by the asset manager." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ModularGameDataPath;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameDataMap_ValueProp;
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameDataMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_GameDataMap;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DefaultPawnData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LoadedAssets_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_LoadedAssets;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularAssetManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_ModularGameDataPath = { "ModularGameDataPath", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAssetManager, ModularGameDataPath), Z_Construct_UClass_UModularGameData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModularGameDataPath_MetaData), NewProp_ModularGameDataPath_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_GameDataMap_ValueProp = { "GameDataMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UPrimaryDataAsset_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp = { "GameDataMap_Key", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Class | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_GameDataMap = { "GameDataMap", nullptr, (EPropertyFlags)0x0124080000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAssetManager, GameDataMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameDataMap_MetaData), NewProp_GameDataMap_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_DefaultPawnData = { "DefaultPawnData", nullptr, (EPropertyFlags)0x0024080000004000, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAssetManager, DefaultPawnData), Z_Construct_UClass_UModularPawnData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultPawnData_MetaData), NewProp_DefaultPawnData_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_LoadedAssets_ElementProp = { "LoadedAssets", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UModularAssetManager_Statics::NewProp_LoadedAssets = { "LoadedAssets", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UModularAssetManager, LoadedAssets), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LoadedAssets_MetaData), NewProp_LoadedAssets_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UModularAssetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_ModularGameDataPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_GameDataMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_GameDataMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_GameDataMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_DefaultPawnData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_LoadedAssets_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UModularAssetManager_Statics::NewProp_LoadedAssets,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAssetManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UModularAssetManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetManager,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAssetManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularAssetManager_Statics::ClassParams = {
	&UModularAssetManager::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UModularAssetManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UModularAssetManager_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularAssetManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularAssetManager()
{
	if (!Z_Registration_Info_UClass_UModularAssetManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularAssetManager.OuterSingleton, Z_Construct_UClass_UModularAssetManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularAssetManager.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UModularAssetManager>()
{
	return UModularAssetManager::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularAssetManager);
UModularAssetManager::~UModularAssetManager() {}
// End Class UModularAssetManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularAssetManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularAssetManager, UModularAssetManager::StaticClass, TEXT("UModularAssetManager"), &Z_Registration_Info_UClass_UModularAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularAssetManager), 1537615527U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularAssetManager_h_2764048035(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularAssetManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
