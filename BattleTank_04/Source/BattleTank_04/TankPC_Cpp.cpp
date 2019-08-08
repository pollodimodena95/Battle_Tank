// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPC_Cpp.h"

void ATankPC_Cpp::BeginPlay()
{
	Super::BeginPlay();
	UE_LOG(LogTemp, Warning, TEXT("PlayercontrollerBeginPlay"));
	auto ControlledTank = GetControlledTank(); // imposta il valore di GetControlledTank dentro alla (variabile intermidiate) auto ControlledTank
	if (!ControlledTank) // controlla se ControlledTank ha un valore nullo
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Not Possessed"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Tank Possessing %s"), *(ControlledTank->GetName()));
	}

	
}

ATank* ATankPC_Cpp::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}