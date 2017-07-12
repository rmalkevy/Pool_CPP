//
// Created by Roman Malkevych on 7/12/17.
//

#ifndef ICE_H
#define ICE_H

#include "AMateria.h"

class Ice : public AMateria
{
public:
	Ice();
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};
#endif //POOL_C_ICE_H
