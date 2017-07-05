//
// Created by Roman Malkevych on 7/5/17.
//

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "iostream"

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const & clapTrap);
	~ClapTrap();
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);

protected:
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	std::string name;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
};
#endif //POOL_C_CLAPTRAP_H
