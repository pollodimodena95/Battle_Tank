// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAiController_cpp.h"
#include "Engine/World.h"
#include "Tank.h"

void ATankAiController_cpp::BeginPlay()
{
	Super::BeginPlay();
	{
		ReportPossession();
	}
};

void ATankAiController_cpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	{

		GetControlledTank()->AimAt(GetPlayerTank()->GetActorLocation());
	}
}

ATank* ATankAiController_cpp::GetControlledTank() const 
{
	return Cast<ATank>(GetPawn()); //riporta il dato getpawn che appartiene a ATank
}

void ATankAiController_cpp::ReportPossession() // ti scrive quale pawn il AIcontroller sta possedendo e che sta mirando il pawn del TankPC_Cpp
{
	auto PlayerTank = GetPlayerTank();
	auto ControlledTank = GetControlledTank();
	if (!PlayerTank) 
	{
		UE_LOG(LogTemp, Warning, TEXT("TankAiController has not found any PlayerTank"));
	}
	else
	{
		if (!ControlledTank)
		{
			UE_LOG(LogTemp, Warning, TEXT("Ai Has not any Pawn"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("%s Found:  %s"), *(ControlledTank->GetName()),*(PlayerTank->GetName()));
		}
	
	}
}


ATank* ATankAiController_cpp::GetPlayerTank() const // GetPlayerTank è un metodo che localizza il pawn del TankPC_Cpp  che è il firstplayercontroller
{
	auto PlayerTank = GetWorld()->GetFirstPlayerController()->GetPawn(); //la logica è guarda nel mondo (GetWorld) dove sta (->) il primo controller del giocatore (GetFirstPlayerController) e che cosa sta possedendo (GetPawn)

	if (!PlayerTank) // se playertank non è uguale alla riga sopra
	{
		return nullptr; // fa niente
	}
	else // se invece è uguale al playertank nella riga sopra
	{
		return Cast<ATank>(PlayerTank); // salva il dato
	}
}
