#pragma once

#include "ArduinoSerial.h"

class FArduinoPlugin : public IArduinoPlugin
{
private:
    ArduinoSerial* SP;
public:
	/** IModuleInterface implementation */
	void InitializeCommunication(FString comPort);
	void SetFanSpeed(uint8 fan1, uint8 fan2);
	void ShutdownCommunication();
};