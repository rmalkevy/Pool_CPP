//
// Created by Roman Malkevych on 7/1/17.
//

#ifndef FRAGTRAP_H
#define FRAGTRAP_H

#include <iostream>

class FragTrap {
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
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & copy);
	~FragTrap();
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	void	initializationVariables(void);
	FragTrap &operator=(FragTrap const &rhs);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	fun1ShitAttack(std::string const &target);
	void	fun2CowAttack(std::string const &target);
	void	fun3SquirrelAttack(std::string const &target);
	void	fun4LightinigAttack(std::string const &target);
	void	fun5TorAttack(std::string const &target);
};

#endif