//
// Created by Roman Malkevych on 7/10/17.
//

#ifndef RADSCORPION_H
#define RADSCORPION_H

#include "Enemy.h"

class RadScorpion : public Enemy {
public:
	RadScorpion();
	RadScorpion(RadScorpion const &radScorpion);
	~RadScorpion();
	RadScorpion &operator=(RadScorpion const &rhs);
};
#endif
