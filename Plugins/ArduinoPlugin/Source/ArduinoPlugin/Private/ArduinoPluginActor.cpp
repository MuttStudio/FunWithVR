#include "ArduinoPluginPrivatePCH.h"

#include "GameFramework/Actor.h"
#include "IArduinoPlugin.h"
#include "ArduinoPluginActor.h"

//Constructor/Initializer
AArduinoPluginActor::AArduinoPluginActor(const FPostConstructInitializeProperties& PCIP)
: Super(PCIP)
{

}

void AArduinoPluginActor::ConnectArduino(FString comPort)
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
}