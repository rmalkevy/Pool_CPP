//
// Created by Roman Malkevych on 7/1/17.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include "ClapTrap.h"

class FragTrap : public ClapTrap{

public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap();
	void	initializationVariables(void);
	void	fun1ShitAttack(std::string const &target);
	void	fun2CowAttack(std::string const &target);
	void	fun3SquirrelAttack(std::string const &target);
	void	fun4LightinigAttack(std::string const &target);
	void	fun5TorAttack(std::string const &target);
	void	vaulthunter_dot_exe(std::string const & target);
	FragTrap &operator=(FragTrap const &rhs);
};

#endif