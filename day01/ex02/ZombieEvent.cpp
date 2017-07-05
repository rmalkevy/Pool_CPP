//
// Created by Roman Malkevych on 6/20/17.
//

#include "ZombieEvent.h"

void	randomChump(void)
{
	int i;

	std::string arrayZombie[10] =
			{"Pasha", "Zero", "Bool", "Loop", "Integer", "FirstEgg", "Digit", "Zaika", "Kilish", "Bob"};
	i = rand() % 10;
	Zombie *zombie = new Zombie;

	zombie->announce();
	delete (zombie);
	delete (zombieEvent);
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->name = name;

	return (zombie);
}

void ZombieEvent::setZombieType(std::string *type, std::string nameType)
{
	*type = nameType;
}