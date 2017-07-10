//
// Created by Roman Malkevych on 7/8/17.
//

#include "PowerFist.h"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const & powerFist)
{
	*this = powerFist;
}

PowerFist::~PowerFist()
{
	std::cout << "Destructor PowerFist" << std::endl;
}

void PowerFist::attack() const
{

	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist& PowerFist::operator=(PowerFist const &rhs)
{
	std::cout << "Assignation operator AWeapon called" << std::endl;

	return *this;
}