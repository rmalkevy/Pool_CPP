//
// Created by Roman Malkevych on 6/21/17.
//

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.h"

class HumanA {
public:
	Weapon weapon;
	HumanA();
	HumanA(std::string nameHumanA, Weapon weapon1);
	HumanA(std::string nameHumanA);
	~HumanA();
	std::string	name;
	void		attack();
	void		setWeapon(Weapon weapon1);
};

#endif
