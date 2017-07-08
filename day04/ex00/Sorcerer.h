//
// Created by Roman Malkevych on 7/6/17.
//

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>

#include "Victim.h"
#include "Peon.h"

class Sorcerer {
public:
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & sorcerer);
	~Sorcerer();
	std::string getName(void) const;
	std::string getTitle(void) const;
	void polymorph(Victim const & victim) const;
	void polymorph(Peon const & peon) const;

protected:
	std::string name;
	std::string title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
