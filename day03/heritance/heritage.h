//
// Created by Roman Malkevych on 7/4/17.
//

#ifndef POOL_C_HERITAGE_H
#define POOL_C_HERITAGE_H

#include <iostream>

class Animal {
public:
	Animal();

	virtual ~Animal();
	void drink(void);

private:
	virtual void Bla()
	{
		std::cout<<"Base"<<std::endl;
	}

private:
	int legs;
	int eyes;
};

class Dog : public Animal {
public:
	Dog();
	virtual ~Dog();
	void bark(void);
	void eatMeat(void);

private:
	int level;
};

class Rockfeller : public Dog {
public:
	Rockfeller();
	~Rockfeller();
	void digDeepPit(void);
	void Bla()
	{
		std::cout<<"Rock"<<std::endl;
	}
};
#endif //POOL_C_HERITAGE_H
