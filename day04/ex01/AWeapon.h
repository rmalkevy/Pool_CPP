//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef AWEAPON_H
#define AWEAPON_H

#include <iostream>

class AWeapon {
private:
	std::string name;
	int apcost;
	int damage;

public:
	AWeapon(std::string const & name, int apcost, int damage);
	virtual ~AWeapon();
	std::string virtual getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};

#endif