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
		UE_LOG(LogTemp, Warning, TEXT(" %s, Possessed by TankPC"), *(ControlledTank->GetName())); // controlledtank prendi il nome del pawn che stai possedendo e riportalo nel %s del log. può farlo siccome controlledtank è uguale a getcontrolledtank
	}

	
}

ATank* ATankPC_Cpp::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}