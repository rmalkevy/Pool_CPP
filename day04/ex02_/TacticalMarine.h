//
// Created by Roman Malkevych on 7/11/17.
//

#ifndef TACTICALMARINE_H
#define TACTICALMARINE_H

#include "ISpaceMarine.h"

class TacticalMarine : public ISpaceMarine
{
public:
	TacticalMarine();
	~TacticalMarine();
	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};
#endif
