//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef POWERFIST_H
#define POWERFIST_H

#include "AWeapon.h"

class PowerFist : public AWeapon
{
public:
	PowerFist(std::string const & name, int apcost, int damage);
	~PowerFist();
};
#endif
