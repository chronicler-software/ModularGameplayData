// Copyright Chronicler.


#pragma once

#include "GameplayTagContainer.h"
#include "InputAction.h"
#include "ModularInputConfig.generated.h"

/**
 * Maps an input action to a gameplay input tag.
 */
USTRUCT(BlueprintType)
struct FModularInputConfigAction
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TObjectPtr<const UInputAction> InputAction = nullptr;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (Categories = "InputTag"))
	FGameplayTag InputTag;
};

UCLASS(BlueprintType, Const)
class MODULARGAMEPLAYDATA_API UModularInputConfig : public UDataAsset
{
	GENERATED_BODY()

public:
	explicit UModularInputConfig(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, Category = "Pawn")
	const UInputAction* FindNativeInputActionForTag(const FGameplayTag& InputGameplayTag, bool bLogNotFound = true) const;

	UFUNCTION(BlueprintCallable, Category = "Pawn")
	const UInputAction* FindAbilityInputActionForTag(const FGameplayTag& InputGameplayTag, bool bLogNotFound = true) const;

	/**
	 * Input actions mapped to a gameplay tag.
	 *
	 * These must be manually bound.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputAction"))
	TArray<FModularInputConfigAction> NativeInputActions;

	/**
	 * Input actions mapped to a gameplay tag.
	 *
	 * These are automatically bound to abilities with matching input tags.
	 */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Meta = (TitleProperty = "InputAction"))
	TArray<FModularInputConfigAction> AbilityInputActions;
};
