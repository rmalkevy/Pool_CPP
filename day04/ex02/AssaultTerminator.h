//
// Created by Roman Malkevych on 7/11/17.
//

#ifndef ASSAULTTERMINATOR_H
#define ASSAULTTERMINATOR_H

#include "ISpaceMarine.h"

class AssaultTerminator : public ISpaceMarine
{
public:
	AssaultTerminator();
	AssaultTerminator(AssaultTerminator const & assaultTerminator);
	~AssaultTerminator();
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
	AssaultTerminator	&operator=(AssaultTerminator const &rhs);
};
#endif
