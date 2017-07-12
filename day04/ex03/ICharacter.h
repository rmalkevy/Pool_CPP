//
// Created by Roman Malkevych on 7/12/17.
//

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>
#include "AMateria.h"

class ICharacter
{
public:
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;
};

#endif
