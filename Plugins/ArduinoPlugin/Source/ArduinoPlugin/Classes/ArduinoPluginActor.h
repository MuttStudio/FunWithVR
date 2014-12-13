#pragma once

#include "GameFramework/Actor.h"
#include "ArduinoPluginActor.generated.h"

UCLASS()
class AArduinoPluginActor : public AActor
{
    GENERATED_UCLASS_BODY()

    UFUNCTION(BlueprintCallable, Category = "ArduinoFunctions")
    void SetFanSpeed(uint8 fan1, uint8 fan2);

    UFUNCTION(BlueprintCallable, Category = "ArduinoFunctions")
        void ConnectArduino();

    UFUNCTION(BlueprintCallable, Category = "ArduinoFunctions")
        void Disconnect();

    UFUNCTION(BlueprintImplementableEvent, Category = "ArduinoFunction")
        void FanSpeedAdjusted(uint8 speed1, uint8 speed2);

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Arduino)
        uint8 speed1;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = Arduino)
        uint8 speed2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Arduino)
        FString comPort;
};


