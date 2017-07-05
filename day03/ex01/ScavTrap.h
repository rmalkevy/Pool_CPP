//
// Created by Roman Malkevych on 7/5/17.
//

#ifndef SCAVTRAP_H
#define SCAVTRAP_H

#include <iostream>

class ScavTrap {
private:
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;

public:
	ScavTrap();
	ScavTrap(std::string const & name);
	ScavTrap(ScavTrap const & scavTrap);
	~ScavTrap();
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	initializationVariables(void);
	ScavTrap &operator=(ScavTrap const &rhs);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	challengeNewcomer();
	void	fun1TakeBigMushroom();
	void	fun2FindPrettyGirl();
	void	fun3KillMonster();
	void	fun4HelpGoblin();
	void	fun5FlyToMars();
};
#endif
