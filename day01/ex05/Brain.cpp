//
// Created by Roman Malkevych on 6/20/17.
//

#include "Brain.h"

Brain::Brain()
{
	return ;
}

std::string Brain::identify() const
{
	std::ostringstream ss;
	ss << this;
	return ( ss.str() );
}

Brain::~Brain()
{
	return ;
}