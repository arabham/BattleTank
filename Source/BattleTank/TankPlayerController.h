// Property of Do Over Games

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h"

/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()


public:
    virtual void BeginPlay() override;
    virtual void Tick(float DeltaSeconds) override;

private:
    UPROPERTY(EditAnywhere)
    float CrosshairXLocation = .5f;

    UPROPERTY(EditAnywhere)
    float CrosshairYLocation = .33333f;

    UPROPERTY(EditAnywhere)
    float LineTraceRange = 1000000;

    ATank* GetControlledTank() const;
    void AimTowardCrosshair();
    bool GetSightRayHitLocation(FVector& HitLocation) const;
    bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
    bool GetLookVectorHitLocation(FVector LookDirection, FVector& HitLocation) const;
};
