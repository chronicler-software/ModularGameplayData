// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DataAsset/ModularInputConfig.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputAction;
struct FGameplayTag;
#ifdef MODULARGAMEPLAYDATA_ModularInputConfig_generated_h
#error "ModularInputConfig.generated.h already included, missing '#pragma once' in ModularInputConfig.h"
#endif
#define MODULARGAMEPLAYDATA_ModularInputConfig_generated_h

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModularInputConfigAction_Statics; \
	MODULARGAMEPLAYDATA_API static class UScriptStruct* StaticStruct();


template<> MODULARGAMEPLAYDATA_API UScriptStruct* StaticStruct<struct FModularInputConfigAction>();

#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFindAbilityInputActionForTag); \
	DECLARE_FUNCTION(execFindNativeInputActionForTag);


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUModularInputConfig(); \
	friend struct Z_Construct_UClass_UModularInputConfig_Statics; \
public: \
	DECLARE_CLASS(UModularInputConfig, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ModularGameplayData"), NO_API) \
	DECLARE_SERIALIZER(UModularInputConfig)


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UModularInputConfig(UModularInputConfig&&); \
	UModularInputConfig(const UModularInputConfig&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UModularInputConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UModularInputConfig); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UModularInputConfig) \
	NO_API virtual ~UModularInputConfig();


#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_26_PROLOG
#define FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h_29_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MODULARGAMEPLAYDATA_API UClass* StaticClass<class UModularInputConfig>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Projects_KulaBoas_Plugins_ModularGameplayData_Source_ModularGameplayData_Public_DataAsset_ModularInputConfig_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
