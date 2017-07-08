//
// Created by Roman Malkevych on 7/6/17.
//

#ifndef VICTIM_H
#define VICTIM_H

#include <iostream>

class Victim {
public:
	Victim( std::string name );
	Victim( Victim const & victim );
	~Victim();
	virtual void getPolymorphed() const;
	virtual std::string getName( ) const;

protected:
	std::string name;
};

std::ostream &operator<<(std::ostream &o, Victim const &rhs);

#endif
