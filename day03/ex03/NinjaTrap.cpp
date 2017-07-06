//
// Created by Roman Malkevych on 7/5/17.
//

#include "NinjaTrap.h"

NinjaTrap::NinjaTrap()
{
	this->name = "Bojod";
	std::cout << "NinjaTrap " << name << " alive. (Constructor NinjaTrap called)" << std::endl;
}

NinjaTrap::NinjaTrap( std::string const &name )
{
	this->name = name;
	std::cout << "NinjaTrap " << name << " alive. (Constructor NinjaTrap called)" << std::endl;
}

NinjaTrap::NinjaTrap( NinjaTrap const &ninjaTrap )
{
	std::cout << name << ", now you are " << ninjaTrap.name << "(Copy constructor ninjaTrap called)";
	*this = ninjaTrap;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << name << ", would you dead man? (Destructor NinjaTrap called)" << std::endl;
	return ;
}

void NinjaTrap::initializationVariables()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}

void NinjaTrap::ninjaShoebox(std::string const & target)
{
	if (this->energyPoints - 25 > 0)
	{
		this->energyPoints -= 25;
		std::cout << "You spent 25 points of energy. Your energy -> " << this->energyPoints << std::endl;
		std::cout << target << ", take a hit to your face, slutty!!!" << std::endl;
	}
	else
	{
		this->energyPoints = 0;
		std::cout << "You spent all energy and you have " << this->energyPoints << " energyPoints" << std::endl;
	}
	return ;
}