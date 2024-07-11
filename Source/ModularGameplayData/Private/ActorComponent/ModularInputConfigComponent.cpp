// Copyright Chronicler.

#include "ActorComponent/ModularInputConfigComponent.h"
#include "EnhancedInputSubsystems.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularInputConfigComponent)

const FName UModularInputConfigComponent::NAME_BindInputsNow("BindInputsNow");

UModularInputConfigComponent::UModularInputConfigComponent(const FObjectInitializer& ObjectInitializer)
{
}

void UModularInputConfigComponent::AddInputMappings(const UModularInputConfig* InputConfig, const UEnhancedInputLocalPlayerSubsystem* InputSubsystem)
{
	check(InputConfig);
	check(InputSubsystem);

	// Here you can handle any custom logic to add something from your input config if required
}

void UModularInputConfigComponent::RemoveInputMappings(const UModularInputConfig* InputConfig, const UEnhancedInputLocalPlayerSubsystem* InputSubsystem)
{
	check(InputConfig);
	check(InputSubsystem);

	// Here you can handle any custom logic to remove input mappings that you may have added above
}

void UModularInputConfigComponent::RemoveBinds(TArray<uint32>& BindHandles)
{
	for (const uint32 Handle : BindHandles)
	{
		RemoveBindingByHandle(Handle);
	}
	BindHandles.Reset();
}
