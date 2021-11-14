#pragma once
#include "ILogger.h"



class AdvancedLogger:public ILogger
{

public :
	void LogNormal(char* message, LoggerChannels channel) override;
	void LogWarning(char* message, LoggerChannels channel) override;
	void LogError(char* message, LoggerChannels channel) override;
	AdvancedLogger();

};

