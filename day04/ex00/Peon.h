//
// Created by Roman Malkevych on 7/6/17.
//

#ifndef PEON_H
#define PEON_H

#include <iostream>
#include "Victim.h"

class Peon : public Victim{
public:
	Peon( Peon const & peon );
	Peon( std::string name );
	~Peon();
	void getPolymorphed( ) const;
	std::string getName( ) const;

private:
	std::string name;
};

std::ostream &operator<<(std::ostream &o, Peon const &rhs);

#endif //POOL_C_PEON_H
