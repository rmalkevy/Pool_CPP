//
// Created by Roman Malkevych on 7/11/17.
//

#ifndef SQUAD_H
#define SQUAD_H

#include "ISquad.h"

class Squad : public ISquad
{
public:
	Squad();
	Squad(Squad const & squad);
	~Squad();
	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);
	void setNumberOfUnits(int newNumberOfUnits);
	Squad &operator=(Squad const &rhs);
	struct List
	{
		List *next;
		ISpaceMarine *elemMarine;
	};

private:
	int numberOfUnits;
	List *beginList;
	List *endList;
};

#endif
