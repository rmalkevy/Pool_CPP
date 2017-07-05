//
// Created by Roman Malkevych on 6/21/17.
//

#ifndef HUMANB_H
# define HUMANB_H

#include "Weapon.h"

class HumanB {
public:
	Weapon		weapon;
	HumanB();
	HumanB(std::string nameHumanB, Weapon weapon1);
	HumanB(std::string nameHumanB);
	~HumanB();
	std::string	name;
	void		attack();
	void		setWeapon(Weapon weapon1);
};
#endif
