//
// Created by Roman Malkevych on 7/12/17.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.h"
#include "AMateria.h"

class Character
{
private:
	std::string name;
	AMateria materia[4];
	int idx;

public:
	Character(std::string name);
	~Character();
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};
#endif
