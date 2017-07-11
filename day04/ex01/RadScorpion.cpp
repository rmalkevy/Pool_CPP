//
// Created by Roman Malkevych on 7/10/17.
//

#include "RadScorpion.h"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
	return ;
}

RadScorpion::RadScorpion( RadScorpion const &radScorpion )
{
	*this = radScorpion;
	return ;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
	return ;
}

RadScorpion& RadScorpion::operator=( RadScorpion const &rhs )
{
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());

	return ( *this );
}