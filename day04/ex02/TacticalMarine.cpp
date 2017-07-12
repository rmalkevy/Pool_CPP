//
// Created by Roman Malkevych on 7/11/17.
//

#include "TacticalMarine.h"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle" << std::endl;
	return ;
}

TacticalMarine::TacticalMarine( TacticalMarine const &tacticalMarine )
{
	*this = tacticalMarine;
	return ;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

ISpaceMarine* TacticalMarine::clone() const
{
	ISpaceMarine *iSpaceMarine = new TacticalMarine;
	*iSpaceMarine = *this;
	return iSpaceMarine;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
	return ;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
	return ;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
	return ;
}

TacticalMarine& TacticalMarine::operator=( TacticalMarine const &rhs )
{
	return *this;
}