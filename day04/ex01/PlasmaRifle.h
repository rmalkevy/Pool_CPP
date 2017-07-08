//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include <iostream>
#include "AWeapon.h"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle(std::string const & name, int apcost, int damage);
	~PlasmaRifle();
};
#endif
