//
// Created by Roman Malkevych on 7/8/17.
//

#include "PowerFist.h"

PowerFist::PowerFist( std::string const &name, int apcost, int damage ) : AWeapon("Power Fist", 50, 8)
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << "Destructor PowerFist" << std::endl;
}