// Fill out your copyright notice in the Description page of Project Settings.

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

