//
// Created by Roman Malkevych on 7/8/17.
//

#include "SuperMutant.h"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
	return ;
}

SuperMutant::SuperMutant( SuperMutant const &superMutant )
{
	*this = superMutant;
	return ;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

void SuperMutant::takeDamage( int dam)
{
	dam -= 3;
	if (dam >= 0)
	{
		int hp = getHP();
		hp  -= dam;
		if (hp < 0)
			hp = 0;
		std::cout << "SuperMutant take damage . You have " << hp << " hp!" << std::endl;
	}
	return ;
}

SuperMutant& SuperMutant::operator=( SuperMutant const &rhs )
{
	this->setType(rhs.getType());
	this->setHP(rhs.getHP());

	return (*this);
}