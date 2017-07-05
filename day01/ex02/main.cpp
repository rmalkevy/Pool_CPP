//
// Created by Roman Malkevych on 6/20/17.
//

#include "Zombie.h"
#include "ZombieEvent.h"

void	randomChump(void)
{
	int i;

	std::string arrayZombie[5] = {"Pasha", "Zero", "Bool", "Loop", "Integer"};
	i = rand() % 5;
	Zombie *zombie;
	ZombieEvent *zombieEvent = new ZombieEvent;;
	zombie = zombieEvent->newZombie(arrayZombie[i]);
	zombieEvent->setZombieType(&zombie->type, arrayZombie[i]);
	zombie->announce();
	delete (zombie);
	delete (zombieEvent);
}

int main(void){
	srand(time(NULL));
	Zombie zombie;
	std::string Gosha("Gosha");
	std::string Vasylivka("Vasylivka");
	zombie.name = Gosha;
	zombie.type = Vasylivka;
	zombie.announce();

	Zombie *zombie1;
	ZombieEvent *zombieEvent = new ZombieEvent;
	std::string Mashka("Mashka");
	zombie1 = zombieEvent->newZombie(Mashka);
	std::string Bryket("Bryket");
	zombieEvent->setZombieType(&zombie1->type, Bryket);
	zombie1->announce();
	delete (zombie1);
	delete (zombieEvent);

	randomChump();
	return (0);
}
