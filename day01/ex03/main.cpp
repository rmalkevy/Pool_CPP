//
// Created by Roman Malkevych on 6/20/17.
//

#include "Zombie.h"
#include "ZombieHorde.h"

int main(void){
	srand(time(NULL));

	ZombieHorde zombieHorde;
	zombieHorde.createZombies(20);
	zombieHorde.announce();
	return (0);
}
