// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPC_Cpp.h"
#include "Engine/World.h"

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
		GetControlledTank()->AimAt(HitLocation);
	}
}

bool ATankPC_Cpp::GetSightRayHitLocation(FVector& HitLocation) const

{
	//Find Crosshair position
	// -de project the screen position of the crosshair to a world direction

	int32 ViewPortSizeX, ViewPortSizeY;
	GetViewportSize(ViewPortSizeX, ViewPortSizeY);
	auto ScreenLocation = FVector2D(ViewPortSizeX * CrossHairXLocation, ViewPortSizeY * CrossHairYLocation);
	FVector LookDirection;
	if (GetLookDirection(ScreenLocation, LookDirection))
	{
		//Line Trace along that look direction
		GetLookVectorHitLocation(LookDirection, HitLocation);


	}
	return true;
}

bool ATankPC_Cpp::GetLookDirection(FVector2D ScreenLocation, FVector &LookDirection) const
{
	FVector CamerWorldLocation;
	return DeprojectScreenPositionToWorld
	(
		ScreenLocation.X,
		ScreenLocation.Y, 
		CamerWorldLocation, 
		LookDirection
	);
}

bool ATankPC_Cpp::GetLookVectorHitLocation(FVector LookDirection, FVector &HitLocation) const
{
	FHitResult HitResult;
	FVector Start = PlayerCameraManager->GetCameraLocation();
	FVector End = Start + (LookDirection * LineTraceRange);
	FCollisionQueryParams TraceParams;
	if (GetWorld()->LineTraceSingleByChannel( HitResult, Start, End, ECC_Visibility, TraceParams))
	{
		HitLocation = HitResult.Location;
		return true;
	}
		return false;
}
