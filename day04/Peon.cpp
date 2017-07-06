//
// Created by Roman Malkevych on 7/6/17.
//

#include "Peon.h"

Peon::Peon( std::string name )
{
	std::cout << "Zog zog." << std::endl;
	this->name = name;
	return ;
}

Peon::Peon( Peon const &peon )
{
	*this = peon;
	return ;
}

Peon::~Peon()
{
	return ;
}