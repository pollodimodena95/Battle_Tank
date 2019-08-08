// Fill out your copyright notice in the Description page of Project Settings.


#include "TankPC_Cpp.h"

ATank* ATankPC_Cpp::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}