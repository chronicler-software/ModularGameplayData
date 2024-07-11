// Copyright Chronicler.

#pragma once

#include "Engine/DataAsset.h"
#include "ModularInputConfig.h"
#include "ModularPawnData.generated.h"

/**
 * UModularPawnData
 *
 *	Non-mutable data asset that contains properties used to define a pawn.
 */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "Pawn Data", ShortTooltip = "Data asset used to define a Pawn."))
class MODULARGAMEPLAYDATA_API UModularPawnData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:
	explicit UModularPawnData(const FObjectInitializer& ObjectInitializer);

public:

	// Class to instantiate for this pawn (should usually derive from AModularPawn or AModularCharacter).
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Pawn")
	TSubclassOf<APawn> PawnClass;

	// Input configuration used by player controlled pawns to create input mappings and bind input actions.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input")
	TObjectPtr<UModularInputConfig> InputConfig;
};
