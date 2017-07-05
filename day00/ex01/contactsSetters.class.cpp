//
// Created by Roman Malkevych on 6/16/17.
//

#include "notebook.class.h"

void Contacts::setFirstName()
{
	std::cout << "Enter a first name     : ";
	getline(std::cin, this->id1FirstName);
}

void Contacts::setLastName()
{
	std::cout << "Enter a last name      : ";
	getline(std::cin, this->id2LastName);
}

void Contacts::setNickName()
{
	std::cout << "Enter a nickname       : ";
	getline(std::cin, this->id3NickName);
}

void Contacts::setLogin()
{
	std::cout << "Enter a login          : ";
	getline(std::cin, this->id4Login);
}

void Contacts::setPostalAddress()
{
	std::cout << "Enter a postal address : ";
	getline(std::cin, this->id5PostalAddress);
}

void Contacts::setEmailAddress()
{
	std::cout << "Enter a email address  : ";
	getline(std::cin, this->id6EmailAddress);
}

void Contacts::setPhoneNumber()
{
	std::cout << "Enter a phone number   : ";
	getline(std::cin, this->id7PhoneNumber);
}

void Contacts::setBirthdayDate()
{
	std::cout << "Enter a birthday date  : ";
	getline(std::cin, this->id8BirthdayDate);
}

void Contacts::setFavoriteMeal()
{
	std::cout << "Enter a favorite meal  : ";
	getline(std::cin, this->id9FavoriteMeal);
}

void Contacts::setUnderwearColor()
{
	std::cout << "Enter a underwear color: ";
	getline(std::cin, this->id10UnderwearColor);
}

void Contacts::setDarkestSecret()
{
	std::cout << "Enter a darkest secret : ";
	getline(std::cin, this->id11DarkestSecret);
}