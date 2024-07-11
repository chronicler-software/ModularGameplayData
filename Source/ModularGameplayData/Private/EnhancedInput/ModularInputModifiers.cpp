#include "EnhancedInput/ModularInputModifiers.h"

#include "EnhancedPlayerInput.h"
#include "GameFramework/SaveGame.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularInputModifiers)

static FString SHARED_SETTINGS_SLOT_NAME = TEXT("SharedGameSettings");

namespace ModularInputModifiersHelpers
{
	/** Returns the owning LyraLocalPlayer of an Enhanced Player Input pointer */
	static ULocalPlayer* GetLocalPlayer(const UEnhancedPlayerInput* PlayerInput)
	{
		if (PlayerInput)
		{
			if (APlayerController* PC = Cast<APlayerController>(PlayerInput->GetOuter()))
			{
				return Cast<ULocalPlayer>(PC->GetLocalPlayer());
			}
		}
		return nullptr;
	}

}

FInputActionValue UModularSettingBasedScalar::ModifyRaw_Implementation(const UEnhancedPlayerInput* PlayerInput, FInputActionValue CurrentValue, float DeltaTime)
{
	if (ensureMsgf(CurrentValue.GetValueType() != EInputActionValueType::Boolean, TEXT("Setting Based Scalar modifier doesn't support boolean values.")))
	{
		if (const ULocalPlayer* LocalPlayer = ModularInputModifiersHelpers::GetLocalPlayer(PlayerInput))
		{
			/** @todo Split this class between local, device UUID, and shared settings. */
			// const UClass* SettingsClass = UModularSettingsShared::StaticClass();
			ULocalPlayerSaveGame* SharedSettings = ULocalPlayerSaveGame::LoadOrCreateSaveGameForLocalPlayer(ULocalPlayerSaveGame::StaticClass(),
				LocalPlayer, SHARED_SETTINGS_SLOT_NAME);
			const UClass* SettingsClass = ULocalPlayerSaveGame::StaticClass();

			const bool bHasCachedProperty = PropertyCache.Num() == 3;

			const FProperty* XAxisValue = bHasCachedProperty ? PropertyCache[0] : SettingsClass->FindPropertyByName(XAxisScalarSettingName);
			const FProperty* YAxisValue = bHasCachedProperty ? PropertyCache[1] : SettingsClass->FindPropertyByName(YAxisScalarSettingName);
			const FProperty* ZAxisValue = bHasCachedProperty ? PropertyCache[2] : SettingsClass->FindPropertyByName(ZAxisScalarSettingName);

			if (PropertyCache.IsEmpty())
			{
				PropertyCache.Emplace(XAxisValue);
				PropertyCache.Emplace(YAxisValue);
				PropertyCache.Emplace(ZAxisValue);
			}

			FVector ScalarToUse = FVector(1.0, 1.0, 1.0);

			switch (CurrentValue.GetValueType())
			{
			case EInputActionValueType::Axis3D:
				ScalarToUse.Z = ZAxisValue ? *ZAxisValue->ContainerPtrToValuePtr<double>(SharedSettings) : 1.0;
			case EInputActionValueType::Axis2D:
				ScalarToUse.Y = YAxisValue ? *YAxisValue->ContainerPtrToValuePtr<double>(SharedSettings) : 1.0;
			case EInputActionValueType::Axis1D:
				ScalarToUse.X = XAxisValue ? *XAxisValue->ContainerPtrToValuePtr<double>(SharedSettings) : 1.0;
				break;
			default: ;
			}

			ScalarToUse.X = FMath::Clamp(ScalarToUse.X, MinValueClamp.X, MaxValueClamp.X);
			ScalarToUse.Y = FMath::Clamp(ScalarToUse.Y, MinValueClamp.Y, MaxValueClamp.Y);
			ScalarToUse.Z = FMath::Clamp(ScalarToUse.Z, MinValueClamp.Z, MaxValueClamp.Z);

			return CurrentValue.Get<FVector>() * ScalarToUse;
		}
	}

	return CurrentValue;
}