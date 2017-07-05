//
// Created by Roman Malkevych on 7/1/17.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>

class FragTrap {
private:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
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
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
};

#endif