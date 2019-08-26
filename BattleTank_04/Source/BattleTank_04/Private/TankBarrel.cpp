// Fill out your copyright notice in the Description page of Project Settings.


#include "TankBarrel.h"
//#include "Runtime/Core/Public/Math/UnrealMath.h"

void UTankBarrel::Elevate(float RelativeSpeed)
{
	//Move The Barrel The Right Amount this frame
	//Given a new elevation speed, and the frame time
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees);

	SetRelativeRotation(FRotator(Elevation, 0, 0));

}