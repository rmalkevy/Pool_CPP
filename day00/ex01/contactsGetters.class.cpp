//
// Created by Roman Malkevych on 6/16/17.
//

#include "notebook.class.h"

std::string Contacts::getFirstName() const
{
	return (this->id1FirstName);
}

std::string Contacts::getLastName() const
{
	return (this->id2LastName);
}

std::string Contacts::getNickName() const
{
	return (this->id3NickName);
}

std::string Contacts::getLogin() const
{
	return (this->id4Login);
}

std::string Contacts::getPostalAddress() const
{
	return (this->id5PostalAddress);
}

std::string Contacts::getEmailAddress() const
{
	return (this->id6EmailAddress);
}

std::string Contacts::getPhoneNumber() const
{
	return (this->id7PhoneNumber);
}

std::string Contacts::getBirthdayDate() const
{
	return (this->id8BirthdayDate);
}

std::string Contacts::getFavoriteMeal() const
{
	return (this->id9FavoriteMeal);
}

std::string Contacts::getUnderwearColor() const
{
	return (this->id10UnderwearColor);
}

std::string Contacts::getDarkestSecret() const
{
	return (this->id11DarkestSecret);
}
