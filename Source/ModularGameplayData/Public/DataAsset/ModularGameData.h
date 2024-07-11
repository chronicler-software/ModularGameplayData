// Copyright Chronicler.


#pragma once

#include "Engine/DataAsset.h"
#include "ModularGameData.generated.h"

/**
 * Non-mutable data asset that contains global game data.
 */
UCLASS(BlueprintType, Const, Meta = (DisplayName = "Modular Game Data", ShortTooltip = "Data asset containing global game data."))
class MODULARGAMEPLAYDATA_API UModularGameData : public UPrimaryDataAsset
{
	GENERATED_BODY()

public:

	UModularGameData();

	// Returns the loaded game data.
	static const UModularGameData& Get();

};
