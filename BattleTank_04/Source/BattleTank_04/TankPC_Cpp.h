// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Tank.h"
#include "TankPC_Cpp.generated.h" // deve essere l'ultimo a essere incluso

/**
 * 
 */
UCLASS()
class BATTLETANK_04_API ATankPC_Cpp : public APlayerController
{
	GENERATED_BODY()

public: 
	ATank* GetControlledTank() const; // getcontrolledtank = un pawn in specifico imparentato con tank

	void BeginPlay() override;
	
};
