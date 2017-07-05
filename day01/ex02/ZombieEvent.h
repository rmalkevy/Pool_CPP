//
// Created by Roman Malkevych on 6/19/17.
//

#include <iostream>
#include "Zombie.h"

#ifndef ZOMBIEEVENT_H
# define ZOMBIEEVENT_H

class ZombieEvent {
public:
	void	setZombieType(std::string *type, std::string nameType);
	Zombie	*newZombie(std::string name);
};
#endif
