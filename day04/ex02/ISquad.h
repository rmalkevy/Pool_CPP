//
// Created by Roman Malkevych on 7/10/17.
//

#ifndef ISQUAD_H
#define ISQUAD_H

#include <iostream>
#include "ISpaceMarine.h"

class ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};
#endif
