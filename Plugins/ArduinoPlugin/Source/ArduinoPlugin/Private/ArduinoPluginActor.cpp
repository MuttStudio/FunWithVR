#include "ArduinoPluginPrivatePCH.h"

#include "GameFramework/Actor.h"
#include "IArduinoPlugin.h"
#include "ArduinoPluginActor.h"

//Constructor/Initializer
AArduinoPluginActor::AArduinoPluginActor(const FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{

}

void AArduinoPluginActor::ConnectArduino()
{
    IArduinoPlugin::Get().InitializeCommunication(comPort);
}

void AArduinoPluginActor::Disconnect()
{
    IArduinoPlugin::Get().ShutdownCommunication();
}

void AArduinoPluginActor::SetFanSpeed(uint8 fan1, uint8 fan2)
{
    IArduinoPlugin::Get().SetFanSpeed(fan1, fan2);
    speed1 = fan1;
    speed2 = fan2;
    FanSpeedAdjusted(fan1, fan2);
}