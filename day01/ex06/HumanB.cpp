//
// Created by Roman Malkevych on 6/21/17.
//

#include "HumanB.h"

HumanB::HumanB()
{
	return ;
}

HumanB::HumanB(std::string nameHumanB)
{
	this->name = nameHumanB;
}

HumanB::HumanB(std::string nameHumanB, Weapon weapon1)
{
	this->name = nameHumanB;
	this->weapon = weapon1;
}

HumanB::~HumanB()
{
	return ;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with his " << this->weapon.type << std::endl;
}

void HumanB::setWeapon(Weapon weapon1)
{
	this->weapon = weapon1;
}