//
// Created by Roman Malkevych on 6/20/17.
//

#include "ZombieHorde.h"

void ZombieHorde::createZombies(int N)
{
	int i;
	int count = -1;

	this->N = N;
	std::string arrayZombie[20] =
			{"Pasha", "Zero", "Bool", "Loop", "Integer", "FirstEgg", "Digit", "Zaika", "Kilish", "Bob",
			"BEBE", "Altruist", "Middle", "Fukker", "Lead", "Additive", "Nub", "ZigZag", "Gigavat", "Sick"};
	this->zombies = new Zombie[N];
	std::string typeOfZombie("Malinovichi");
	while (++count < N)
	{
		i = rand() % N;
		this->zombies[count].name = arrayZombie[i];
		this->zombies[count].type = typeOfZombie;
	}

	return ;
}

void ZombieHorde::announce()
{
	int i = -1;

	while (++i < this->N)
		this->zombies[i].announce();
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->zombies;
	std::cout << "destroy ZombieHorde" << std::endl;
	return ;
}