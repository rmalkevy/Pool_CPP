//
// Created by Roman Malkevych on 7/12/17.
//

#include "Character.h"

Character::Character(std::string name)
{
	idx = 0;
	this->materia[0] = NULL;
	this->materia[1] = NULL;
	this->materia[2] = NULL;
	this->materia[3] = NULL;
	this->name = name;
	return ;
}

Character::~Character()
{
	return ;
}

std::string const& Character::getName() const
{
	return this->name;
}

void Character::equip( AMateria *m )
{
	if (this->idx < 4)
	{
		this->materia[this->idx] = *m;
		this->idx++;
	}
}