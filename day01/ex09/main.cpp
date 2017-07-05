//
// Created by Roman Malkevych on 6/22/17.
//

#include "Logger.h"

int main()
{
	Logger logger;
	std::string dest;
	std::string message;

	dest = "logToConsole";
	message = "I want to travel in Kanada)) ";

	logger.log(dest, message);

	dest = "logToFile";
	message = "I like Onuka, her music is inspiring";

	logger.log(dest, message);
	return (0);
}