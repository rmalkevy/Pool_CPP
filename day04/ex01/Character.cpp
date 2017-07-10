//
// Created by Roman Malkevych on 7/10/17.
//

#include "Character.h"

Character::Character()
{
	this->actionPoints = 40;
	this->aWeapon = NULL;
	this->enemy = NULL;
	return ;
}

Character::Character( Character const &character )
{
	*this = character;
	return ;
}

Character::Character( std::string const &name )
{
	this->name = name;
	this->actionPoints = 40;
	this->aWeapon = NULL;
	this->enemy = NULL;
	return ;
}

Character::~Character()
{
	return ;
}

void Character::recoverAP()
{
	this->actionPoints += 10;
	if (this->actionPoints > 40)
		this->actionPoints = 40;
	std::cout << this->getName() << " have " << this->getActionPoints() << " HP!"<< std::endl;
	return ;
}

void Character::equip( AWeapon * aWeapon1 )
{
	this->aWeapon = aWeapon1;
	return ;
}

void Character::attack( Enemy * enemy1 )
{
	this->enemy = enemy1;
	if (this->aWeapon != NULL)
	{
		std::cout << this->name << " attacks " << enemy1->getType() << " with a ";
		std::cout << this->aWeapon->getName() << std::endl;
		this->aWeapon->attack();
		setActionPoints( this->getActionPoints() - this->aWeapon->getAPCost());
		enemy1->setHP(enemy1->getHP() - this->aWeapon->getDamage());
		if (enemy1->getHP() <= 0)
			delete enemy1;
	}
	return ;
}

std::string const Character::getName() const
{
	return (this->name);
}

void Character::setActionPoints( int actionPoints)
{
	this->actionPoints = actionPoints;
	if (this->actionPoints < 0)
		this->actionPoints = 0;
	return ;
}

int Character::getActionPoints() const
{
	return (this->actionPoints);
}

AWeapon const *Character::getAWeapon() const
{
	return (this->aWeapon);
}

Character& Character::operator=(Character const &rhs)
{
	std::cout << "Assignation operator Character called" << std::endl;

	return *this;
}

std::ostream& operator<<( std::ostream &o, Character const &rhs )
{
	AWeapon const *aWeapon1 = rhs.getAWeapon();

	o << rhs.getName() << " has " << rhs.getActionPoints();
	if (aWeapon1 != NULL)
		o << " AP and wields a " << aWeapon1->getName() << std::endl;
	else
		o << " AP and is unarmed" << std::endl;
	return ( o );
}