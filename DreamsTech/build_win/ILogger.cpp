#include "ILogger.h"
#include "LoggerChannels.h"

void ILogger::AddChannel(std::vector< LoggerChannels> channels)
{
	for (auto item : channels)
	{
		auto result = static_cast<int>(ILogger::LoggerChannel) | static_cast<int>(item);
		ILogger::LoggerChannel = static_cast<LoggerChannels>(result);
	}
}




 bool ILogger::CheckChannelIsActive(  LoggerChannels channel) const
 {
	const int intChannel = static_cast<int>(channel);

	
	return (static_cast<int>(ILogger::LoggerChannel) & intChannel) == intChannel;

}


