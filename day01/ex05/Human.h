//
// Created by Roman Malkevych on 6/21/17.
//

#ifndef HUMAN_H
# define HUMAN_H

#include <ostream>
# include "Brain.h"

class Human
{
	const Brain brain;
public:
	Human();

	~Human();

	std::string identify();

	const Brain &getBrain() const;
};



#endif
