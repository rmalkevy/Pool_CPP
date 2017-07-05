//
// Created by Roman Malkevych on 6/21/17.
//

#include "Weapon.h"
#include "HumanA.h"
#include "HumanB.h"

int main()
{
	{
		Weapon        club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("Bastards club");
		bob.attack();
		std::cout << club.getType() << std::endl;
	}
	{
		Weapon        club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("Banditos club");
		jim.attack();
		std::cout << club.getType() << std::endl;
	}
	return (0);
}