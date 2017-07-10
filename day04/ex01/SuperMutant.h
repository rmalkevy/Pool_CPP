//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef SUPERMUTANT_H
#define SUPERMUTANT_H

#include "Enemy.h"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const &superMutant);
	~SuperMutant();
	void takeDamage(int);
	SuperMutant &operator=(SuperMutant const &rhs);
};
#endif
