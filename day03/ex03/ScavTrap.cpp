//
// Created by Roman Malkevych on 7/5/17.
//

#include "ScavTrap.h"

void ScavTrap::initializationVariables()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 50;
	this->maxEnergyPoints = 50;
	this->level = 1;
	this->meleeAttackDamage = 20;
	this->rangedAttackDamage = 15;
	this->armorDamageReduction = 3;
}

ScavTrap::ScavTrap()
{
	initializationVariables();
	this->name = "Figel Duder";
	std::cout << "ScavTrap " << name << " alive. (Constructor ScavTrap called)" << std::endl;
}

ScavTrap::ScavTrap(std::string const & name)
{
	initializationVariables();
	this->name = name;
	std::cout << "ScavTrap " << name << " alive. (Constructor ScavTrap called)" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & copy )
{
	std::cout << name << ", now you are " << copy.name << "(Copy constructor ScavTrap called)";
	*this = copy;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << ", you are dead " << "(Destructor ScavTrap called)" << std::endl;
}

void ScavTrap::fun1TakeBigMushroom()
{
	std::cout << name << ", if you take this Big Mushroom, you will have more energy for adventures!!! Have a fun)))" << std::endl;
	return ;
}

void ScavTrap::fun2FindPrettyGirl()
{
	std::cout << name << ", girl, girl, girl. I know you need this. But I forget you are fucking robot!!! Hhahahha" << std::endl;
	return ;
}

void ScavTrap::fun3KillMonster()
{
	std::cout << name << ", I suppose, you can kill this crappy Zombie Manster? Anyway, you have no choice..." << std::endl;
	return ;
}

void ScavTrap::fun4HelpGoblin()
{
	std::cout << name << ", I told you, don't help goblins, they are fucking bastards" << std::endl;
	return ;
}

void ScavTrap::fun5FlyToMars()
{
	std::cout << name << ", I always know, that you will do it!!! Mars, Mars, fly to Mars - ClapTrap" << std::endl;
	return ;
}

void ScavTrap::challengeNewcomer()
{
	typedef void (ScavTrap::*FunctionPoint)();

	FunctionPoint functionPoint[5];
	functionPoint[0] = &ScavTrap::fun1TakeBigMushroom;
	functionPoint[1] = &ScavTrap::fun2FindPrettyGirl;
	functionPoint[2] = &ScavTrap::fun3KillMonster;
	functionPoint[3] = &ScavTrap::fun4HelpGoblin;
	functionPoint[4] = &ScavTrap::fun5FlyToMars;

	int numberOfFunction = rand() % 5;

	if (this->energyPoints - 25 > 0)
	{
		this->energyPoints -= 25;
		std::cout << "You spent 25 points of energy. Your energy -> " << this->energyPoints << std::endl;
		(this->*functionPoint[numberOfFunction])();
	}
	else
	{
		std::cout << "You spent all energy and you have " << this->energyPoints << " energyPoints" << std::endl;
		this->energyPoints = 0;
	}
}

ScavTrap& ScavTrap::operator=(ScavTrap const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->hitPoints = rhs.hitPoints;
	this->maxHitPoints = rhs.maxHitPoints;
	this->energyPoints = rhs.energyPoints;
	this->maxEnergyPoints = rhs.maxEnergyPoints;
	this->level = rhs.level;
	this->meleeAttackDamage = rhs.meleeAttackDamage;
	this->rangedAttackDamage = rhs.rangedAttackDamage;
	this->armorDamageReduction = rhs.armorDamageReduction;
	return *this;
}

