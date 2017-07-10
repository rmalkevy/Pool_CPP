//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.h"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const & powerFist);
	~PowerFist();
	void attack() const;
	PowerFist &operator=(PowerFist const &rhs);
};
#endif
