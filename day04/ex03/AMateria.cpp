//
// Created by Roman Malkevych on 7/12/17.
//

#include "AMateria.h"

AMateria::AMateria( std::string const &type )
{
	this->xp_ = 0;
}

AMateria::~AMateria()
{
	return ;
}

std::string const& AMateria::getType() const
{
	return this->type;
}

unsigned int AMateria::getXP() const
{
	return this->xp_;
}

void AMateria::use( ICharacter &target )
{

}