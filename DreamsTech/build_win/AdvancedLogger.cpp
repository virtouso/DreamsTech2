#include "AdvancedLogger.h"
#include <cocos2d.h>
using namespace   cocos2d;



AdvancedLogger::AdvancedLogger()
{

}



void AdvancedLogger::LogNormal(char* message, LoggerChannels channel)
{
	const bool isActive = ILogger::CheckChannelIsActive(channel);
	if (!isActive) return;


	auto result = strcat("MOEEN==Normal==", message);
	log(result);
}


void AdvancedLogger::LogWarning(char* message, LoggerChannels channel)
{
	const bool isActive = ILogger::CheckChannelIsActive(channel);
	if (!isActive) return;

	log(message);

}



void AdvancedLogger::LogError(char* message, LoggerChannels channel)
{
	const bool isActive = ILogger::CheckChannelIsActive(channel);
	if (!isActive) return;
	log(message);

}
