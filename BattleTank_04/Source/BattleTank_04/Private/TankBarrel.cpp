// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//Move The Barrel The Right Amount this frame
	//Given a new elevation speed, and the frame time
	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate(); Called at Speed %f"), DegreesPerSecond)
}