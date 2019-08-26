// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine/Classes/GameFrameWork/Actor.h"
#include "CoreMinimal.h"
#include "AIController.h"
#include "TankAiController_cpp.generated.h"

class ATank;
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

	virtual void Tick(float DeltaTime) override;

public:
	ATank* GetControlledTank() const;

	void ReportPossession();


};
