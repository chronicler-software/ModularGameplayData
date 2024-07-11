// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ModularGameplayData/Public/ActorComponent/ModularInputConfigComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeModularInputConfigComponent() {}

// Begin Cross Module References
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UEnhancedInputComponent();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularInputConfigComponent();
MODULARGAMEPLAYDATA_API UClass* Z_Construct_UClass_UModularInputConfigComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_ModularGameplayData();
// End Cross Module References

// Begin Class UModularInputConfigComponent
void UModularInputConfigComponent::StaticRegisterNativesUModularInputConfigComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UModularInputConfigComponent);
UClass* Z_Construct_UClass_UModularInputConfigComponent_NoRegister()
{
	return UModularInputConfigComponent::StaticClass();
}
struct Z_Construct_UClass_UModularInputConfigComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UModularInputConfigComponent\n *\n *\x09""Component used to manage Enhanced Input mappings and bindings using an input config data asset.\n *\n *\x09Set under 'Project Settings/Engine/Input' or using runtime binding.\n *\n *\x09@see LyraGame/Input/LyraInputComponent\n */" },
#endif
		{ "HideCategories", "Activation Components|Activation Activation Components|Activation" },
		{ "IncludePath", "ActorComponent/ModularInputConfigComponent.h" },
		{ "ModuleRelativePath", "Public/ActorComponent/ModularInputConfigComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UModularInputConfigComponent\n\n    Component used to manage Enhanced Input mappings and bindings using an input config data asset.\n\n    Set under 'Project Settings/Engine/Input' or using runtime binding.\n\n    @see LyraGame/Input/LyraInputComponent" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UModularInputConfigComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UModularInputConfigComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEnhancedInputComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_ModularGameplayData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputConfigComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UModularInputConfigComponent_Statics::ClassParams = {
	&UModularInputConfigComponent::StaticClass,
	"Input",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x00B000ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UModularInputConfigComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UModularInputConfigComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UModularInputConfigComponent()
{
	if (!Z_Registration_Info_UClass_UModularInputConfigComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UModularInputConfigComponent.OuterSingleton, Z_Construct_UClass_UModularInputConfigComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UModularInputConfigComponent.OuterSingleton;
}
template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<UModularInputConfigComponent>()
{
	return UModularInputConfigComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UModularInputConfigComponent);
UModularInputConfigComponent::~UModularInputConfigComponent() {}
// End Class UModularInputConfigComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ActorComponent_ModularInputConfigComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UModularInputConfigComponent, UModularInputConfigComponent::StaticClass, TEXT("UModularInputConfigComponent"), &Z_Registration_Info_UClass_UModularInputConfigComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UModularInputConfigComponent), 1260580949U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ActorComponent_ModularInputConfigComponent_h_2066641786(TEXT("/Script/ModularGameplayData"),
	Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ActorComponent_ModularInputConfigComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_ActorComponent_ModularInputConfigComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
