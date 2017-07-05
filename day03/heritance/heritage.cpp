//
// Created by Roman Malkevych on 7/4/17.
//

#include "heritage.h"

Rockfeller::Rockfeller()
{
	std::cout << "Constructor Rockfeller called !" << std::endl;
	return ;
}

Rockfeller::~Rockfeller()
{
	std::cout << "Destructor Rockfeller called !" << std::endl;
	return ;
}

void Rockfeller::digDeepPit()
{
	std::cout << "Rocki dig deep pits, fucking dog!!!!" << std::endl;
	return ;
}

Dog::Dog()
{
	std::cout << "Constructor Dog called !" << std::endl;
	return ;
}

Dog::~Dog()
{
	std::cout << "Destructor Dog called" << std::endl;
	return ;
}

Animal::Animal()
{
	std::cout << "Constructor Animal called !" << std::endl;
	return ;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called !" << std::endl;
	return ;
}

void Animal::drink()
{
	std::cout << "Animal drink water! " << std::endl;
	return ;
}

void Dog::eatMeat()
{
	std::cout << "Animal eat" << std::endl;
	return ;
}

void Dog::bark()
{
	std::cout << "Bark Bark!!! Hav Hav!!!" << std::endl;
	return ;
}