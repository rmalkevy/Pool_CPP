//
// Created by Roman Malkevych on 7/6/17.
//

#ifndef SORCERER_H
#define SORCERER_H

#include <iostream>

#include "Victim.h"
#include "Peon.h"

class Sorcerer : Victim, Peon {
public:
	Sorcerer(std::string const & name, std::string const & title);
	Sorcerer(Sorcerer const & sorcerer);
	~Sorcerer();
	std::string getName(void);
	std::string getTitle(void);
	void polymorph(Victim const &) const;
	void introduceSorcerer();

protected:
	std::string name;
	std::string title;
};

std::ostream &operator<<(std::ostream &o, Sorcerer const &rhs);

#endif
