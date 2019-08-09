// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/Classes/GameFrameWork/Actor.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "Tank.h"
#include "TankAiController_cpp.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_04_API ATankAiController_cpp : public AAIController
{
	GENERATED_BODY()

private:
	virtual void BeginPlay() override;

	ATank* GetPlayerTank() const;

public:
	ATank* GetControlledTank() const;

	void ReportPossession();
};
