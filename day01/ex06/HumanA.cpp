//
// Created by Roman Malkevych on 6/21/17.
//

#include "HumanA.h"

HumanA::HumanA()
{
	return ;
}

HumanA::HumanA(std::string nameHumanA)
{
	this->name = nameHumanA;
}

HumanA::HumanA(std::string nameHumanA, Weapon weapon1)
{
	this->name = nameHumanA;
	this->weapon = weapon1;
}

void HumanA::setWeapon(Weapon weapon1)
{
	this->weapon = weapon1;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.type << std::endl;
}

HumanA::~HumanA()
{
	return ;
}
