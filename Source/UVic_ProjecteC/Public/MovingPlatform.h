// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"


#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SplineComponent.h"
#include "Components/InterpToMovementComponent.h"

#include "GameFramework/Actor.h"
#include "MovingPlatform.generated.h"

UCLASS()
class UVIC_PROJECTEC_API AMovingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMovingPlatform();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Settings")
	float Duration;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* Mesh;
	USceneComponent* Root;
	UPROPERTY(VisibleAnywhere)
	USplineComponent* Spline;
	UInterpToMovementComponent* InterpMovement;
	

};
