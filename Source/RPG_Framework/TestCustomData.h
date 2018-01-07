#pragma once
#include "TestCustomData.generated.h"
USTRUCT(BlueprintType)
struct FTestCustomData : public FTableRowBase
{
	GENERATED_USTRUCT_BODY()
		UPROPERTY(BlueprintReadOnly, Category = "TestCustomData")
		int32 Num;
	UPROPERTY(BlueprintReadOnly, Category = "TestCustomData")
		FString Str;
};