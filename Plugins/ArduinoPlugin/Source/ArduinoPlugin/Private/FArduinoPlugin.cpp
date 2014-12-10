#include "ArduinoPluginPrivatePCH.h"

#include "IArduinoPlugin.h"
#include "FArduinoPlugin.h"

#include "ArduinoSerial.h"

void FArduinoPlugin::InitializeCommunication(FString comPort)
{
    SP = new ArduinoSerial(comPort);

	SP->SyncBoard();
}

void FArduinoPlugin::ShutdownCommunication()
{
	if(SP != NULL)
	{
    	SP->UnSyncBoard();
	}
}

void FArduinoPlugin::SetFanSpeed(uint8 fan1, uint8 fan2)
{
    if (SP != NULL && SP->IsConnected())
    {
        int val = fan1 + fan2 * 10;

        SP->WriteData((char*)&val, 1);
    }
}

IMPLEMENT_MODULE(FArduinoPlugin, ArduinoPlugin)