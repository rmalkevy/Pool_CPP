//
// Created by Roman Malkevych on 7/11/17.
//

#include "Squad.h"

Squad::Squad()
{
	beginList = new List;
	endList = new List;
	this->beginList->next = NULL;
	this->beginList->elemMarine = NULL;
	this->endList->elemMarine = NULL;
	this->endList->next = NULL;
	this->numberOfUnits = 0;
	return ;
}

Squad::Squad( Squad const &squad )
{
	*this = squad;
	return ;
}

Squad::~Squad()
{
	while (beginList->next)
	{
		List *temp = beginList;
		delete beginList->elemMarine;
		beginList = beginList->next;
		delete temp;
	}
	delete beginList->elemMarine;
	return ;
}

int Squad::getCount() const
{
	return (this->numberOfUnits);
}

ISpaceMarine* Squad::getUnit( int n ) const
{
	int i = 0;
	List *temp;
	temp = beginList;

	while (i < n)
	{
		temp = temp->next;
		i++;
	}
	return (temp->elemMarine);
}

int Squad::push( ISpaceMarine *newISpaceMarine)
{
	if (this->beginList->elemMarine == NULL)
	{
		this->beginList->elemMarine = newISpaceMarine;

		endList = beginList;
	}
	else
	{
		List *elem = new List;

		elem->elemMarine = newISpaceMarine;
		elem->next = NULL;

		endList->next = elem;
		endList = endList->next;
	}
	this->numberOfUnits++;
	return ( this->numberOfUnits );
}

void Squad::setNumberOfUnits( int newNumberOfUnits )
{
	this->numberOfUnits = newNumberOfUnits;
	return ;
}

void Squad::setBeginList( List *newBeginList )
{
	this->beginList = newBeginList;
	return ;
}

void Squad::setEndList( List *newEndList )
{
	this->endList = newEndList;
	return ;
}

List* Squad::getBeginList() const
{
	return this->beginList;
}

List* Squad::getEndList() const
{
	return this->endList;
}

Squad& Squad::operator=(Squad const &rhs)
{
	std::cout << "Assignation operator Squad called" << std::endl;

	this->setNumberOfUnits(rhs.getCount());
	this->setBeginList(rhs.getBeginList());
	this->setEndList(rhs.getEndList());
	return *this;
}