//
// Created by Roman Malkevych on 7/5/17.
//

#include "ClapTrap.h"

ClapTrap::ClapTrap()
{
	this->name = "Clapper Pudiol";
	std::cout << "ClapTrap " << name << " alive. (Constructor ClapTrap called)" << std::endl;
}

ClapTrap::ClapTrap(std::string const & name) : name(name)
{
	std::cout << "ClapTrap " << name << " alive. (Constructor ClapTrap called)" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & copy )
{
	std::cout << name << ", now you are " << copy.name << "(Copy constructor ClapTrap called)";
	*this = copy;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << ", you are dead " << "(Destructor ClapTrap called)" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount )
{
	if (hitPoints + amount <= maxHitPoints && amount > 0)
		hitPoints += amount;
	else if (hitPoints + amount > maxHitPoints)
		hitPoints = maxHitPoints;
	std::cout << "You repaired HP and have " << hitPoints << " hitPoints" << std::endl;
}

void ClapTrap::meleeAttack( std::string const &target )
{
	std::cout << this->name << " attacks " << target;
	std::cout << " at melee, causing " << this->meleeAttackDamage << " points of damage" << std::endl;
	return ;
}

void ClapTrap::rangedAttack( std::string const &target )
{
	std::cout << this->name << " attacks " << target;
	std::cout << " at range, causing " << this->rangedAttackDamage << " points of damage" << std::endl;
	return ;
}

void ClapTrap::takeDamage( unsigned int amount )
{
	amount -= armorDamageReduction;
	if (amount > 0)
		hitPoints -= amount;
	if (hitPoints < 0)
		hitPoints = 0;
}