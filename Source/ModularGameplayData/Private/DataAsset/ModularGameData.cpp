// Copyright Chronicler.


#include "DataAsset/ModularGameData.h"
#include "DataAsset/ModularAssetManager.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(ModularGameData)

UModularGameData::UModularGameData()
{
}

const UModularGameData& UModularGameData::UModularGameData::Get()
{
	return UModularAssetManager::Get().GetModularGameData();
}
