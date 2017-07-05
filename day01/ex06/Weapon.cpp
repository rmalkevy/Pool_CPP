//
// Created by Roman Malkevych on 6/21/17.
//

#include "Weapon.h"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string strType)
{
	this->type = strType;
	return ;
}

Weapon::~Weapon()
{
	return ;
}

const	std::string& Weapon::getType()
{
	return (this->type);
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}