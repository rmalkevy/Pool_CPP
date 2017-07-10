//
// Created by Roman Malkevych on 7/8/17.
//

#include "Enemy.h"

Enemy::Enemy()
{
	return ;
}

Enemy::Enemy( Enemy const &enemy )
{
	*this = enemy;
	return ;
}

Enemy::Enemy( int hp, std::string const &type )
{
	this->hp = hp;
	this->type = type;
}

Enemy::~Enemy()
{
	return ;
}

void Enemy::takeDamage( int dam)
{
	if (dam >= 0)
	{
		this->hp -= dam;
		if (this->hp < 0)
			this->hp = 0;
		std::cout << "take damage Enemy " << std::endl;
	}
	return ;
}

int Enemy::getHP() const
{
	return (this->hp);
}

void Enemy::setHP( int newHP )
{
	this->hp = newHP;
	if (this->hp < 0)
		this->hp = 0;
	return ;
}
std::string const Enemy::getType() const
{
	return (this->type);
}

Enemy& Enemy::operator=( Enemy const &rhs )
{
	return ( *this );
}