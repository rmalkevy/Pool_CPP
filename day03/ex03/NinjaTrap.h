//
// Created by Roman Malkevych on 7/5/17.
//

#ifndef NINJATRAP_H
#define NINJATRAP_H

#include "ClapTrap.h"

class NinjaTrap : public ClapTrap {
public:
	NinjaTrap();
	NinjaTrap(std::string const & name);
	NinjaTrap(NinjaTrap const & ninjaTrap);
	~NinjaTrap();
	void	ninjaShoebox(std::string const & target);
	void	initializationVariables(void);
};
#endif