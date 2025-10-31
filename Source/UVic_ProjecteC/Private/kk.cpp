// Fill out your copyright notice in the Description page of Project Settings.


#include "kk.h"

// Sets default values
Akk::Akk()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void Akk::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("KAKA"))
}

// Called every frame
void Akk::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

