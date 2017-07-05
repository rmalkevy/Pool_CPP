//
// Created by Roman Malkevych on 6/21/17.
//

#include "Brain.h"
#include "Human.h"

int main(void)
{
	Human bob;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;

	return (0);
}