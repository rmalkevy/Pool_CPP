//
// Created by Roman Malkevych on 7/8/17.
//



#include "PlasmaRifle.h"
#include "Character.h"
#include "RadScorpion.h"
#include "PowerFist.h"


int main ()
{
	Character* zaz = new Character("zaz");
	std::cout << *zaz;
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
	return 0;
}