//
// Created by Roman Malkevych on 7/3/17.

#include "FragTrap.h"
#include "ScavTrap.h"
#include "NinjaTrap.h"
#include "ClapTrap.h"

int main (void)
{
	srand(time(0));
	FragTrap fragTrap("Bot");
	fragTrap.rangedAttack("Bob");
	fragTrap.meleeAttack("Saint David");
	fragTrap.takeDamage(54);
	fragTrap.beRepaired(34);
	fragTrap.vaulthunter_dot_exe("Bibakovich");


	ScavTrap scavTrap("Gomar");
	scavTrap.challengeNewcomer();
	scavTrap.beRepaired(45);
	scavTrap.takeDamage(32);
	scavTrap.meleeAttack("Bibor");

	NinjaTrap ninjaTrap("Ninjo");
	ninjaTrap.meleeAttack("Gobjik");
	ninjaTrap.takeDamage(56);
	ninjaTrap.beRepaired(32);
	ninjaTrap.ninjaShoebox();
	return (0);
}