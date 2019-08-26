// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // da lasciare per ultimo

//Forward Decleration
class UTankBarrel;
class UTankAimingComponent;


UCLASS()
class BATTLETANK_04_API ATank : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ATank();

protected:
	// Called when the game starts or when spawned

private:	

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void BeginPlay() override;

	UTankBarrel* Barrel = nullptr;

public:

	void AimAt(FVector HitLocation);

	UTankAimingComponent* TankAimingComponent = nullptr;

	UFUNCTION(BlueprintCallable, Category = Setup)
		void SetBarrelReference(UTankBarrel* BarrelToSet);

	UPROPERTY(EditAnyWhere, Category = Firing)
	float LaunchSpeed = 100000; // trovare portata 

};
