//
// Created by Roman Malkevych on 6/22/17.
//

#ifndef LOGGER_H
# define LOGGER_H
# include <iostream>
# include <fstream>

class Logger {
private:
	void		logToConsole(std::string const & logConsole);
	void		logToFile(std::string const & logFile);
	std::string	makeLogEntry(std::string const & message);
public:
	std::string	nameFile;
	void		log(std::string const & dest, std::string const & message);
};
#endif
