//
// Created by Roman Malkevych on 7/8/17.
//



#include "PlasmaRifle.h"
#include "Character.h"
#include "RadScorpion.h"
#include "PowerFist.h"


int main ()
{
	Character *zaz = new Character("zaz");
	Character baz("baz");
	std::cout << *zaz;
	std::cout << baz;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	zaz->equip(pr);
	std::cout << *zaz;

	zaz->equip(pf);
	zaz->attack(b);
	std::cout << *zaz;

	zaz->equip(pr);
	std::cout << *zaz;
	zaz->attack(b);
	std::cout << *zaz;

	zaz->attack(b);
	std::cout << *zaz;

	zaz->recoverAP();
	std::cout << *zaz;
	std::cout << baz;
	baz = *zaz;
	std::cout << *zaz;
	std::cout << baz;
	return 0;
}