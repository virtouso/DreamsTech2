#pragma once
#include <vector>
#include "LoggerChannels.h"
class ILogger
{

protected:
	LoggerChannels LoggerChannel;

	void AddChannel(std::vector<LoggerChannels> channels);
	bool CheckChannelIsActive( LoggerChannels channel) const;


public:

	void virtual  LogNormal(char* message, LoggerChannels channel)=0;
	void virtual  LogWarning(char* message, LoggerChannels channel)=0;
	void virtual  LogError(char* message, LoggerChannels channel)=0;
};

