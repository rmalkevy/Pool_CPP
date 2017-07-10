//
// Created by Roman Malkevych on 7/8/17.
//

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

class Enemy {
private:
	std::string type;
	int hp;

public:
	Enemy();
	Enemy(Enemy const & enemy);
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	std::string const	getType() const;
	int					getHP() const;
	void				setType(std::string const & newType);
	void				setHP(int newHP);
	virtual void takeDamage(int);
	Enemy &operator=(Enemy const &rhs);
};

#endif
