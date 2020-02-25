// Property of Do Over Games


#include "TankPlayerController.h"


void ATankPlayerController::BeginPlay()
{
	Super::BeginPlay();

	ATank* ControlledTank = GetControlledTank();

	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("No controlled tank found!"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Controlled tank: %s"), *ControlledTank->GetName());	
	}
}


ATank* ATankPlayerController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}