//
// Created by Roman Malkevych on 7/8/17.
//

#include "PlasmaRifle.h"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{
	return ;
}

PlasmaRifle::PlasmaRifle( PlasmaRifle const &plasmaRifle )
{
	*this = plasmaRifle;
	return ;
}

PlasmaRifle::~PlasmaRifle()
{
	return ;
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle& PlasmaRifle::operator=(PlasmaRifle const &rhs)
{
	std::cout << "Assignation operator AWeapon called" << std::endl;

	return *this;
}
