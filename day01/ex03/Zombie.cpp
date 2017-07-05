//
// Created by Roman Malkevych on 6/19/17.
//

#include "Zombie.h"

void Zombie::announce()
{
	std::cout << "<" << this->name <<" ("<<this->type<<")> Braiiiiiiinnnssss..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destroy Zombie" << std::endl;
	return ;
}