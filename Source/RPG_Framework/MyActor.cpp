// Fill out your copyright notice in the Description page of Project Settings.

#include "RPG_Framework.h"
#include "MyActor.h"
#include "TestCustomData.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("Hello, world"));

	if (DataTable != NULL)
	{
		FTestCustomData *row = DataTable->FindRow<FTestCustomData>(TEXT("1"), TEXT("LookupTestCustomData"));
		FString someString = row->Str;
		UE_LOG(LogTemp, Warning, TEXT("%s"), *someString);

	}

	
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

