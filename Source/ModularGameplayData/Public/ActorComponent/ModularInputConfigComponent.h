// Copyright Chronicler.


#pragma once

#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "DataAsset/ModularInputConfig.h"
#include "ModularInputConfigComponent.generated.h"

/**
 * UModularInputConfigComponent
 *
 *	Component used to manage Enhanced Input mappings and bindings using an input config data asset.
 *
 *	Set under 'Project Settings/Engine/Input' or using runtime binding.
 *
 *	@see LyraGame/Input/LyraInputComponent
 */
UCLASS(Config="Input")
class MODULARGAMEPLAYDATA_API UModularInputConfigComponent : public UEnhancedInputComponent
{
	GENERATED_BODY()

public:
	static const FName NAME_BindInputsNow;
	explicit UModularInputConfigComponent(const FObjectInitializer& ObjectInitializer);

	void AddInputMappings(const UModularInputConfig* InputConfig, const UEnhancedInputLocalPlayerSubsystem* InputSubsystem);
	void RemoveInputMappings(const UModularInputConfig* InputConfig, const UEnhancedInputLocalPlayerSubsystem* InputSubsystem);

	template<class UserClass, typename FuncType>
	void BindNativeAction(const UModularInputConfig* InputConfig,
		const FGameplayTag& InputTag,
		ETriggerEvent TriggerEvent,
		UserClass* Object,
		FuncType Func,
		bool bLogIfNotFound);

	template<class UserClass, typename PressedFuncType, typename ReleasedFuncType>
	void BindAbilityActions(const UModularInputConfig* InputConfig,
		UserClass* Object,
		PressedFuncType PressedFunc,
		ReleasedFuncType ReleasedFunc,
		TArray<uint32>& BindHandles);

	void RemoveBinds(TArray<uint32>& BindHandles);
};


template<class UserClass, typename FuncType>
void UModularInputConfigComponent::BindNativeAction(const UModularInputConfig* InputConfig,
	const FGameplayTag& InputTag,
	ETriggerEvent TriggerEvent,
	UserClass* Object,
	FuncType Func,
	bool bLogIfNotFound)
{
	check(InputConfig);
	if (const UInputAction* InputAction = InputConfig->FindNativeInputActionForTag(InputTag, bLogIfNotFound))
	{
		BindAction(InputAction, TriggerEvent, Object, Func);
	}
}

template<class UserClass, typename PressedFuncType, typename ReleasedFuncType>
void UModularInputConfigComponent::BindAbilityActions(const UModularInputConfig* InputConfig,
	UserClass* Object,
	PressedFuncType PressedFunc,
	ReleasedFuncType ReleasedFunc,
	TArray<uint32>& BindHandles)
{
	check(InputConfig);

	for (const auto& [InputAction, InputTag] : InputConfig->AbilityInputActions)
	{
		if (InputAction && InputTag.IsValid())
		{
			if (PressedFunc)
			{
				BindHandles.Add(BindAction(InputAction, ETriggerEvent::Triggered, Object, PressedFunc, InputTag).GetHandle());
			}

			if (ReleasedFunc)
			{
				BindHandles.Add(BindAction(InputAction, ETriggerEvent::Completed, Object, ReleasedFunc, InputTag).GetHandle());
			}
		}
	}
}
