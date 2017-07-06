//
// Created by Roman Malkevych on 7/6/17.
//

#ifndef PEON_H
#define PEON_H

#include <iostream>

class Peon {
public:
	Peon(Peon const & peon);
	Peon(std::string name);
	~Peon();
	void Peon::getPolymorphed() const;

private:
	std::string name;
};

std::ostream &operator<<(std::ostream &o, Peon const &rhs);
#endif //POOL_C_PEON_H
