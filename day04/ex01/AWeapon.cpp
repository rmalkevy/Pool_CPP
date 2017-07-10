//
// Created by Roman Malkevych on 7/8/17.
//

#include "AWeapon.h"

AWeapon::AWeapon()
{
	return ;
}

AWeapon::AWeapon( std::string const &name, int apcost, int damage )
{
	this->name = name;
	this->apcost = apcost;
	this->damage = damage;
	return ;
}

AWeapon::AWeapon( AWeapon const &aWeapon )
{
	*this = aWeapon;
	return ;
}

AWeapon::~AWeapon()
{
	return ;
}

int AWeapon::getAPCost() const
{
	return (this->apcost);
}

int AWeapon::getDamage() const
{
	return (this->damage);
}

std::string const AWeapon::getName() const
{
	return (this->name);
}

AWeapon& AWeapon::operator=(AWeapon const &rhs)
{
	std::cout << "Assignation operator AWeapon called" << std::endl;

	return *this;
}