// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "RPGCharacter.generated.h"

UCLASS()
class RPG_FRAMEWORK_API ARPGCharacter : public ACharacter
{
	GENERATED_BODY()
		ARPGCharacter(const class FObjectInitializer& ObjectInitializer);
public:
	virtual void MoveVertical(float Value);
	virtual void MoveHorizontal(float Value);
	
};
