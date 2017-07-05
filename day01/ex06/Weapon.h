//
// Created by Roman Malkevych on 6/21/17.
//

#ifndef WEAPON_H
# define WEAPON_H

# include <iostream>

class Weapon {

public:
	Weapon();
	Weapon(std::string strType);
	~Weapon();
	const		std::string & getType();
	void		setType(std::string newType);
	std::string	type;
};
#endif
