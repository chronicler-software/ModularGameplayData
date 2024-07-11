// Copyright Chronicler.


#include "DataAsset/ModularInputConfig.h"

#include "ModularGameplayDataLogs.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularInputConfig)

UModularInputConfig::UModularInputConfig(const FObjectInitializer& ObjectInitializer)
{
}

const UInputAction* UModularInputConfig::FindNativeInputActionForTag(const FGameplayTag& InputGameplayTag, bool bLogNotFound) const
{
	for (const auto& [InputAction, InputTag] : NativeInputActions)
	{
		if (InputAction && (InputTag == InputGameplayTag))
		{
			return InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogModularGameplayData, Error, TEXT("Can't find NativeInputAction for InputTag [%s] on InputConfig [%s]."),
			*InputGameplayTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}

const UInputAction* UModularInputConfig::FindAbilityInputActionForTag(const FGameplayTag& InputGameplayTag, bool bLogNotFound) const
{
	for (const auto& [InputAction, InputTag] : AbilityInputActions)
	{
		if (InputAction && (InputTag == InputGameplayTag))
		{
			return InputAction;
		}
	}

	if (bLogNotFound)
	{
		UE_LOG(LogModularGameplayData, Error, TEXT("Can't find AbilityInputAction for InputTag [%s] on InputConfig [%s]."),
			*InputGameplayTag.ToString(), *GetNameSafe(this));
	}

	return nullptr;
}
