//
// Created by Roman Malkevych on 7/5/17.
//

#include "NinjaTrap.h"

NinjaTrap::NinjaTrap()
{

}

NinjaTrap::NinjaTrap( std::string const &name )
{

}

NinjaTrap::NinjaTrap( NinjaTrap const &ninjaTrap )
{

}

NinjaTrap::~NinjaTrap()
{

}

void NinjaTrap::initializationVariables()
{
	this->hitPoints = 60;
	this->maxHitPoints = 60;
	this->energyPoints = 120;
	this->maxEnergyPoints = 120;
	this->level = 1;
	this->meleeAttackDamage = 60;
	this->rangedAttackDamage = 5;
	this->armorDamageReduction = 0;
}