//
// Created by Roman Malkevych on 7/3/17.
//

#include "FragTrap.h"

void FragTrap::initializationVariables()
{
	this->hitPoints = 100;
	this->maxHitPoints = 100;
	this->energyPoints = 100;
	this->maxEnergyPoints = 100;
	this->level = 1;
	this->meleeAttackDamage = 30;
	this->rangedAttackDamage = 20;
	this->armorDamageReduction = 5;
}

FragTrap::FragTrap()
{
	initializationVariables();
	this->name = "Figa";
	std::cout << "FragTrap " << name << " alive. (Constructor FragTrap called)" << std::endl;
}

FragTrap::FragTrap( std::string name )
{
	initializationVariables();
	this->name = name;
	std::cout << "FragTrap " << name << " alive. (Constructor FragTrap called)" << std::endl;
}

FragTrap::FragTrap( FragTrap const & copy )
{
	std::cout << name << ", now you are " << copy.name << "(Copy constructor FragTrap called)";
	*this = copy;
}

FragTrap::~FragTrap()
{
	std::cout << name << ", you are dead " << "(Destructor FragTrap called)" << std::endl;
}

void FragTrap::fun1ShitAttack( std::string const &target )
{
	std::cout << target << " get some shit" << std::endl;
	return ;
}

void FragTrap::fun2CowAttack( std::string const &target )
{
	std::cout << target << " have to graze a cow!!!! hahah hhhahah...." << std::endl;
	return ;
}

void FragTrap::fun3SquirrelAttack( std::string const &target )
{
	std::cout << target << " , do you know that 1000 squirrels want to kill you? Run away " << target << " .Ran away!!! bitch" << std::endl;
	return ;
}

void FragTrap::fun4LightinigAttack( std::string const &target )
{
	std::cout << target << ", lightening kill you and you have no HP!!! " << std::endl;
	return ;
}

void FragTrap::fun5TorAttack( std::string const &target )
{
	std::cout << target << ", have mercy on me, Tor!!!! But Tor don't hear you, crappy" << std::endl;
	return ;
}

void FragTrap::vaulthunter_dot_exe( std::string const &target )
{
	typedef void (FragTrap::*FunctionPoint)(std::string const &);

	FunctionPoint functionPoint[5];
	functionPoint[0] = &FragTrap::fun1ShitAttack;
	functionPoint[1] = &FragTrap::fun2CowAttack;
	functionPoint[2] = &FragTrap::fun3SquirrelAttack;
	functionPoint[3] = &FragTrap::fun4LightinigAttack;
	functionPoint[4] = &FragTrap::fun5TorAttack;

	int numberOfFunction = rand() % 5;

	if (this->energyPoints - 25 > 0)
	{
		this->energyPoints -= 25;
		std::cout << "You spent 25 points of energy. Your energy -> " << this->energyPoints << std::endl;
		(this->*functionPoint[numberOfFunction])(target);
	}
	else
	{
		std::cout << "You spent all energy and you have " << this->energyPoints << " energyPoints" << std::endl;
		this->energyPoints = 0;
	}
}

FragTrap& FragTrap::operator=(FragTrap const &rhs)
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

