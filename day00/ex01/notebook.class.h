//
// Created by Roman Malkevych on 6/15/17.
//
#include <iostream>
#include <cstdlib>
#ifndef NOTEBOOK_CLASS_H
#define NOTEBOOK_CLASS_H

class Contacts {

public:
	void		setFirstName();
	void		setLastName();
	void		setNickName();
	void		setLogin();
	void		setPostalAddress();
	void		setEmailAddress();
	void		setPhoneNumber();
	void		setBirthdayDate();
	void		setFavoriteMeal();
	void		setUnderwearColor();
	void		setDarkestSecret();

	std::string	getFirstName() const;
	std::string	getLastName() const;
	std::string	getNickName() const;
	std::string	getLogin() const;
	std::string	getPostalAddress() const;
	std::string	getEmailAddress() const;
	std::string	getPhoneNumber() const;
	std::string	getBirthdayDate() const;
	std::string	getFavoriteMeal() const;
	std::string	getUnderwearColor() const;
	std::string	getDarkestSecret() const;

private:
	std::string	id1FirstName;
	std::string	id2LastName;
	std::string	id3NickName;
	std::string	id4Login;
	std::string	id5PostalAddress;
	std::string	id6EmailAddress;
	std::string	id7PhoneNumber;
	std::string	id8BirthdayDate;
	std::string	id9FavoriteMeal;
	std::string	id10UnderwearColor;
	std::string	id11DarkestSecret;
};

class Notebook {

public:
	Notebook();
	~Notebook();

private:
	Contacts	contactsClass[8];
	std::string	command;
	void		promtCommand();
	int			idContacts;
	void		addContact();
	void		searchContact();
	void		printAllContacts();
	void		printField(std::string field);
	void		printInfoAboutIdContact();
};

#endif
