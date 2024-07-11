// Copyright Chronicler Software Corporation.


#pragma once

#include "Engine/StreamableManager.h"

DECLARE_DELEGATE_OneParam(FModularAssetManagerStartupJobSubstepProgress, float /*NewProgress*/);

/** Handles reporting progress from streamable handles */
struct FModularAssetManagerStartupJob
{
	FModularAssetManagerStartupJobSubstepProgress SubstepProgressDelegate;
	TFunction<void(const FModularAssetManagerStartupJob&, TSharedPtr<FStreamableHandle>&)> JobFunc;
	FString JobName;
	float JobWeight;
	mutable double LastUpdate = 0;

	/** Simple job that is all synchronous */
	FModularAssetManagerStartupJob
		(const FString& InJobName,
			const TFunction<void(const FModularAssetManagerStartupJob&, TSharedPtr<FStreamableHandle>&)>& InJobFunc,
			const float InJobWeight): JobFunc(InJobFunc),
			                          JobName(InJobName),
			                          JobWeight(InJobWeight)
	{}

	/** Perform actual loading, will return a handle if it created one */
	TSharedPtr<FStreamableHandle> DoJob() const;

	void UpdateSubstepProgress(const float NewProgress) const
	{
		SubstepProgressDelegate.ExecuteIfBound(NewProgress);
	}

	/**
	 * Updates the Substep progress during loading.
	 *
	 * @param StreamableHandle
	 *
	 * @todo This has a possible memory leak passing StreamableHandle as a copy instead of reference.
	 */
	void UpdateSubstepProgressFromStreamable(const TSharedRef<FStreamableHandle> StreamableHandle) const
	{
		if (SubstepProgressDelegate.IsBound())
		{
			// StreamableHandle::GetProgress traverses() a large graph and is quite expensive
			if (const double Now = FPlatformTime::Seconds(); LastUpdate - Now > 1.0 / 60)
			{
				SubstepProgressDelegate.Execute(StreamableHandle->GetProgress());
				LastUpdate = Now;
			}
		}
	}
};
