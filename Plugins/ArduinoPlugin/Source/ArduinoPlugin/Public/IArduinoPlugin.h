// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "ModuleManager.h"
#include "Engine.h"

class ArduinoPluginImpl;

/**
 * The public interface to this module
 */
class IArduinoPlugin : public IModuleInterface
{
private:
	ArduinoPluginImpl* pimpl;

public:

	/**
	 * Singleton-like access to this module's interface.  This is just for convenience!
	 * Beware of calling this during the shutdown phase, though.  Your module might have been unloaded already.
	 *
	 * @return Returns singleton instance, loading the module on demand if needed
	 */
	static inline IArduinoPlugin & Get()
	{
		return FModuleManager::LoadModuleChecked< IArduinoPlugin  >( "ArduinoPlugin" );
	}

	/**
	 * Checks to see if this module is loaded and ready.  It is only valid to call Get() if IsAvailable() returns true.
	 *
	 * @return True if the module is loaded and ready to use
	 */
	static inline bool IsAvailable()
	{
		return FModuleManager::Get().IsModuleLoaded( "ArduinoPlugin" );
	}

	/**
	 * Public API, implemented in FArduinoPlugin.cpp
	 */
	virtual void InitializeCommunication(FString comPort) = 0;
	virtual void ShutdownCommunication() = 0;
	virtual void SetFanSpeed(uint8 fan1, uint8 fan2) = 0;
};