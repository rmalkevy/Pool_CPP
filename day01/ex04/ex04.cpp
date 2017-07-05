//
// Created by Roman Malkevych on 6/20/17.
//

#include <iostream>

int main(void)
{
	std::string str("HI THIS IS BRAIN!");
	std::string *pointer = &str;
	std::string &ref = str;

	std::cout << *pointer << std::endl;
	std::cout << ref << std::endl;

	return (0);
}