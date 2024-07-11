// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/GameFeature/GameFeatureAction_WorldActionBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameFeatureAction_WorldActionBase() {}

// Begin Cross Module References
GAMEFEATURES_API UClass* Z_Construct_UClass_UGameFeatureAction();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin Class UGameFeatureAction_WorldActionBase
void UGameFeatureAction_WorldActionBase::StaticRegisterNativesUGameFeatureAction_WorldActionBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameFeatureAction_WorldActionBase);
UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase_NoRegister()
{
	return UGameFeatureAction_WorldActionBase::StaticClass();
}
struct Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Base class for GameFeatureActions that wish to do something world specific.\n */" },
#endif
		{ "IncludePath", "GameFeature/GameFeatureAction_WorldActionBase.h" },
		{ "ModuleRelativePath", "Public/GameFeature/GameFeatureAction_WorldActionBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base class for GameFeatureActions that wish to do something world specific." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameFeatureAction_WorldActionBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameFeatureAction,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::ClassParams = {
	&UGameFeatureAction_WorldActionBase::StaticClass,
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
	0x002010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameFeatureAction_WorldActionBase()
{
	if (!Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton, Z_Construct_UClass_UGameFeatureAction_WorldActionBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UGameFeatureAction_WorldActionBase>()
{
	return UGameFeatureAction_WorldActionBase::StaticClass();
}
UGameFeatureAction_WorldActionBase::UGameFeatureAction_WorldActionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameFeatureAction_WorldActionBase);
UGameFeatureAction_WorldActionBase::~UGameFeatureAction_WorldActionBase() {}
// End Class UGameFeatureAction_WorldActionBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_WorldActionBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameFeatureAction_WorldActionBase, UGameFeatureAction_WorldActionBase::StaticClass, TEXT("UGameFeatureAction_WorldActionBase"), &Z_Registration_Info_UClass_UGameFeatureAction_WorldActionBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameFeatureAction_WorldActionBase), 1233128258U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_WorldActionBase_h_2147449463(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_WorldActionBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_GameFeature_GameFeatureAction_WorldActionBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
