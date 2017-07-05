//
// Created by Roman Malkevych on 6/23/17.
//

#include "Fixed.class.h"


int main(void)
{
	Fixed a(2.1f);
	Fixed b(24);
	Fixed c(3298.7f);

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << a.toFloat() << std::endl;
	std::cout << b.toFloat() << std::endl;
	std::cout << c.toFloat() << std::endl;

	std::cout << "a < b " << (a < b) << std::endl;
	std::cout << "a == b " << (a == b) << std::endl;
	std::cout << "a >= b " << (a >= b) << std::endl;
	std::cout << "a++ " << a++ << std::endl;
	std::cout << "++a " << ++a << std::endl;

	std::cout << Fixed::min(a, b) << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;

	return (0);
}