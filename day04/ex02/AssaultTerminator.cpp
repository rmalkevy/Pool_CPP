//
// Created by Roman Malkevych on 7/11/17.
//

#include "AssaultTerminator.h"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *" << std::endl;
	return ;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const &assaultTerminator )
{
	*this = assaultTerminator;
	return ;
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back ..." << std::endl;
	return ;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	ISpaceMarine *iSpaceMarine = new AssaultTerminator;
	*iSpaceMarine = *this;
	return iSpaceMarine;
}

void AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT !" << std::endl;
	return ;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *" << std::endl;
	return ;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *" << std::endl;
	return ;
}

AssaultTerminator& AssaultTerminator::operator=( AssaultTerminator const &rhs )
{
	return *this;
}