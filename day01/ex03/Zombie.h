#include <iostream>
#ifndef ZOMBIE_H
# define ZOMBIE_H

class Zombie {
public:
	std::string name;
	std::string type;
	void announce();
	~Zombie();
};
#endif
