//
// Created by Roman Malkevych on 7/12/17.
//

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>

class AMateria
{
private:
	std::string		type;
	unsigned int	xp_;

public:
	AMateria(std::string const & type);

	virtual ~AMateria();
	std::string const & getType() const; //Returns the materia type
	unsigned int getXP() const; //Returns the Materia s XP
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};
#endif
