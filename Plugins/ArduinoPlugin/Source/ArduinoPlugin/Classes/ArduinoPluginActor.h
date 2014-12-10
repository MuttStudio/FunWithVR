#pragma once

#include "GameFramework/Actor.h"
#include "ArduinoPluginActor.generated.h"

UCLASS()
class AArduinoPluginActor : public AActor
{
	GENERATED_UCLASS_BODY()

	UFUNCTION(BlueprintCallable, Category="ArduinoFunctions")
	void SetFanSpeed(uint8 fan1, uint8 fan2);

    UFUNCTION(BlueprintCallable, Category = "ArduinoFunctions")
    void ConnectArduino(FString comPort);

    UFUNCTION(BlueprintCallable, Category = "ArduinoFunctions")
    void Disconnect();
};


