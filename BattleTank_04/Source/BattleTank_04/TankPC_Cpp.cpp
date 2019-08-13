// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPC_Cpp.h"

ATankPC_Cpp::ATankPC_Cpp()
{
	PrimaryActorTick.bCanEverTick = true;
}

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

void ATankPC_Cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	{
		AimTowardsCrossHair();
	}

}

ATank* ATankPC_Cpp::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}

void ATankPC_Cpp::AimTowardsCrossHair()
{


	
	if (!GetControlledTank()) {return;}

	FVector HitLocation; //OutParameter
	if (GetSightRayHitLocation(HitLocation))
	{
		UE_LOG(LogTemp, Warning, TEXT("HitLocation : %s "), *(HitLocation.ToString()))
			//(getworldlocation) prendi la posizione nel mondo se linetrace punta alla landscape tramite il crosshair
			//indica al controlledtank di mirare in questa posizione
	}
}

bool ATankPC_Cpp::GetSightRayHitLocation(FVector& HitLocation) const

{
	HitLocation = FVector(1.0);
	return true;
}