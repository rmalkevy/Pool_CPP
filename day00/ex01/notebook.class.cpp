//
// Created by Roman Malkevych on 6/15/17.
//

#include "notebook.class.h"

Notebook::Notebook()
{
	this->idContacts = 0;
	promtCommand();

	return ;
}

void Notebook::promtCommand()
{
	std::cout << "Promt 'ADD' to add new contact. ";
	std::cout << "You can add max 8 contacts" << std::endl;
	std::cout << "Promt 'SEARCH' to search contact" << std::endl;
	std::cout << "Promt 'EXIT' to EXIT" << std::endl;
	while (1)
	{
		std::cout << "command: ";
		getline(std::cin, this->command);
		if (this->command.compare("ADD") == 0)
			addContact();
		else if (this->command.compare("SEARCH") == 0)
			searchContact();
		else if (this->command.compare("EXIT") == 0)
			exit(0);
		std::cout << "Enter command: 'ADD' | 'SEARCH' | 'EXIT'" << std::endl;
	}
}

void Notebook::addContact()
{
	if (this->idContacts < 8)
	{
		std::cout << "Contact " << this->idContacts + 1 << std::endl;
		contactsClass[this->idContacts].setFirstName();
		contactsClass[this->idContacts].setLastName();
		contactsClass[this->idContacts].setNickName();
		contactsClass[this->idContacts].setLogin();
		contactsClass[this->idContacts].setPostalAddress();
		contactsClass[this->idContacts].setEmailAddress();
		contactsClass[this->idContacts].setPhoneNumber();
		contactsClass[this->idContacts].setBirthdayDate();
		contactsClass[this->idContacts].setFavoriteMeal();
		contactsClass[this->idContacts].setUnderwearColor();
		contactsClass[this->idContacts].setDarkestSecret();
		this->idContacts++;
	}
	else
	{
		std::cout << "Reached a limit of 8 contacts!" << std::endl;
		std::cout << "Promt 'SEARCH' to search contact" << std::endl;
		std::cout << "Promt 'EXIT' to EXIT" << std::endl;
	}
}

void Notebook::printField(std::string field)
{
	unsigned long	lenString;
	unsigned long	lenSpaces;

	lenString = field.length();
	std::string spaces(10, ' ');
	if (lenString > 10)
	{
		field = field.substr(0, 8);
		std::cout << field << "." << "|";
	}
	else
	{
		lenSpaces = 10 - lenString;
		std::cout << spaces.substr(0, lenSpaces) << field << "|";
	}
}

void Notebook::printAllContacts()
{
	int	i;

	i = 1;
	while (i <= this->idContacts)
	{
		std::string spaces(10, ' ');
		std::cout << "|" << spaces.substr(0, 9) << i << "|";
		printField(contactsClass[i - 1].getFirstName());
		printField(contactsClass[i - 1].getLastName());
		printField(contactsClass[i - 1].getNickName());
		std::cout << std::endl;
		i++;
	}
}

void Notebook::printInfoAboutIdContact()
{
	int				id;
	unsigned long	lenId;
	std::string idContact;

	while (1)
	{
		std::cout << "Search ID contact: ";
		getline(std::cin, idContact);
		lenId = idContact.length();
		if (lenId == 1 && std::isdigit(idContact[0]))
		{
			id = std::stoi(idContact);
			if (id > 0 && id <= this->idContacts)
			{
				std::cout << "First name       :" << contactsClass[id - 1].getFirstName() << std::endl;
				std::cout << "Last name        :" << contactsClass[id - 1].getLastName() << std::endl;
				std::cout << "Nick name        :" << contactsClass[id - 1].getNickName() << std::endl;
				std::cout << "Login            :" << contactsClass[id - 1].getLogin() << std::endl;
				std::cout << "Postal address   :" << contactsClass[id - 1].getPostalAddress() << std::endl;
				std::cout << "Email address    :" << contactsClass[id - 1].getEmailAddress() << std::endl;
				std::cout << "Phone number     :" << contactsClass[id - 1].getPhoneNumber() << std::endl;
				std::cout << "Birthday date    :" << contactsClass[id - 1].getBirthdayDate() << std::endl;
				std::cout << "Favorite meal    :" << contactsClass[id - 1].getFavoriteMeal() << std::endl;
				std::cout << "Underwear color  :" << contactsClass[id - 1].getUnderwearColor() << std::endl;
				std::cout << "Darkest secret   :" << contactsClass[id - 1].getDarkestSecret() << std::endl;
				return ;
			}
			else
				std::cout << "Incorrect id!" << std::endl;
		}
		else
			std::cout << "Incorrect id!" << std::endl;
	}
}

void Notebook::searchContact()
{
	if (this->idContacts > 0)
	{
		printAllContacts();
		printInfoAboutIdContact();

	}
	else
		std::cout << "You haven't contacts! Add come contacts to your NOTEBOOK" << std::endl;
	return ;
}

Notebook::~Notebook()
{
	return ;
}

