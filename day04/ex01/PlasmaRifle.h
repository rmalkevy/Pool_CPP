//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef PLASMARIFLE_H
#define PLASMARIFLE_H

#include "AWeapon.h"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & plasmaRifle);
	~PlasmaRifle();
	void attack() const;
	PlasmaRifle &operator=(PlasmaRifle const &rhs);
};
#endif
