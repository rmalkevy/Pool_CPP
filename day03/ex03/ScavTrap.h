//
// Created by Roman Malkevych on 7/5/17.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>
#include "ClapTrap.h"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & scavTrap);
	~ScavTrap();
	void	initializationVariables(void);
	void	challengeNewcomer();
	void	fun1TakeBigMushroom();
	void	fun2FindPrettyGirl();
	void	fun3KillMonster();
	void	fun4HelpGoblin();
	void	fun5FlyToMars();
	ScavTrap &operator=(ScavTrap const &rhs);
};
#endif
