// Fill out your copyright notice in the Description page of Project Settings.


#include "MovingPlatform.h"

// Sets default values
AMovingPlatform::AMovingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	Spline = CreateDefaultSubobject<USplineComponent>(TEXT("Spline"));
	InterpMovement = CreateDefaultSubobject<UInterpToMovementComponent>(TEXT("InterpMovement"));

	Root->SetupAttachment(GetRootComponent());
	Mesh->SetupAttachment(Root);
	Spline->SetupAttachment(Root);
	
	

}

// Called when the game starts or when spawned
void AMovingPlatform::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < Spline->GetNumberOfSplinePoints(); i++)
	{
		FVector point = Spline->GetLocationAtSplinePoint(i, ESplineCoordinateSpace::Local);
		InterpMovement->AddControlPointPosition(point);
	}
	InterpMovement->SetComponentTickEnabled(true);
	InterpMovement->BehaviourType = EInterpToBehaviourType::PingPong;
	InterpMovement->Duration = Duration;
	InterpMovement->FinaliseControlPoints();
	
}

// Called every frame
void AMovingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

