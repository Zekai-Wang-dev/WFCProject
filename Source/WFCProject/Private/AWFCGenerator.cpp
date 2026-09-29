// Fill out your copyright notice in the Description page of Project Settings.


#include "AWFCGenerator.h"
#include "Engine/Engine.h"

// Sets default values
AAWFCGenerator::AAWFCGenerator()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    UE_LOG(LogTemp, Error, TEXT("WFC CONSTRUCTOR RAN"));

}

// Called when the game starts or when spawned
void AAWFCGenerator::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Error, TEXT("WFC GENERATOR STARTED"));

    if (GEngine)
    {
        GEngine->AddOnScreenDebugMessage(
            -1,
            5.0f,
            FColor::Red,
            TEXT("WFC GENERATOR STARTED")
        );
    }

}

// Called every frame
void AAWFCGenerator::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

