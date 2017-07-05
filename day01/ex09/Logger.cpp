//
// Created by Roman Malkevych on 6/22/17.
//

#include "Logger.h"

void Logger::log(std::string const & dest, std::string const & message)
{
	std::cout << makeLogEntry(message) << std::endl;

	typedef void(Logger::*Action)(std::string const &);
	Action actionLog[2];
	actionLog[0] = &Logger::logToConsole;
	actionLog[1] = &Logger::logToFile;

	if (!dest.compare("logToConsole"))
		(this->*actionLog[0])(message);
	else if (!dest.compare("logToFile"))
		(this->*actionLog[1])(message);
	return ;
}

void Logger::logToConsole(std::string const &message)
{
	std::cout << "Message -> " << message << std::endl;
	return ;
}

void Logger::logToFile(std::string const &message)
{
	this->nameFile = "logToFile.log";
	std::ofstream ofs(nameFile);
	ofs << message;
	return ;
}

std::string Logger::makeLogEntry(std::string const & message)
{
	std::string logIn;

	time_t _tm = time(NULL );
	struct tm * curtime = localtime ( &_tm );
	logIn += asctime(curtime);
	logIn += "You are successfully log in to the Matrix.. Message -> ";
	logIn += message;
	return (logIn);
}