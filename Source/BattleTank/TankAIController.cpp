// Property of Do Over Games


#include "TankAIController.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"


void ATankAIController::BeginPlay()
{
	Super::BeginPlay();

	ATank* PlayerTank = GetPlayerTank();
}


ATank* ATankAIController::GetAIControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


ATank* ATankAIController::GetPlayerTank() const
{
	return Cast<ATank>(GetWorld()->GetFirstPlayerController()->GetPawn());
}