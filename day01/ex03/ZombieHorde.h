//
// Created by Roman Malkevych on 6/20/17.
//

#include "Zombie.h"

#ifndef ZOMBIEHORDE_H
#define ZOMBIEHORDE_H

class ZombieHorde {
public:
	Zombie	*zombies;
	int		N;
	void	createZombies(int N);
	void	announce();
	~ZombieHorde();
};
#endif
