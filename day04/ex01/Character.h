//
// Created by Roman Malkevych on 7/10/17.
//

#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "AWeapon.h"
#include "Enemy.h"

class Character {
private:
	std::string name;
	int actionPoints;
	AWeapon *aWeapon;
	Enemy *enemy;

public:
	Character();
	Character(Character const & character);
	Character(std::string const & name);
	~Character();
	void	recoverAP();
	void	equip(AWeapon*);
	void	attack(Enemy*);
	std::string const getName() const;
	int		getActionPoints() const;
	AWeapon	const *getAWeapon() const;
	Enemy	const *getEnemy() const;
	void	setName(std::string newName);
	void	setActionPoints(int newActionPoints);
	void	setAWeapon(AWeapon *newAWeapon);
	void	setEnemy(Enemy *newEnemy);
	Character &operator=(Character const &rhs);
};

std::ostream& operator<<(std::ostream &o, Character const &rhs);

#endif
