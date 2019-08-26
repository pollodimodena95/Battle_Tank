// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankAimingComponent.h"
#include "TankPC_Cpp.generated.h" // deve essere l'ultimo a essere incluso

class ATank;

/**
 * 
 */
UCLASS()
class BATTLETANK_04_API ATankPC_Cpp : public APlayerController
{
	GENERATED_BODY()
public:

	ATankPC_Cpp();

private:


	void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	
	

public: 
	ATank* GetControlledTank() const; // getcontrolledtank = un pawn in specifico imparentato con tank

	void AimTowardsCrossHair(); //posiziona la canna del cannone dove stai mirando così da sparare dove stai mirando 

	bool GetSightRayHitLocation(FVector& HitLocation) const;

		UPROPERTY(EditAnywhere)
		float CrossHairXLocation = 0.5;

		UPROPERTY(EditAnywhere)
		float CrossHairYLocation = 0.33333;

		bool GetLookDirection(FVector2D ScreenLocation, FVector &LookDirection) const;

		bool GetLookVectorHitLocation(FVector LookDirection, FVector &HitLocation) const; 

		UPROPERTY(EditAnyWhere)
		float LineTraceRange = 1000000;
};
