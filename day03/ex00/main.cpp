//
// Created by Roman Malkevych on 7/3/17.

#include "FragTrap.h"

int main (void)
{
	srand(time(0));
	FragTrap fragTrap("Bot");
	fragTrap.rangedAttack("Bob");
	fragTrap.meleeAttack("Saint David");
	fragTrap.takeDamage(54);
	fragTrap.beRepaired(34);
	fragTrap.vaulthunter_dot_exe("Bibakovich");

	return (0);
}