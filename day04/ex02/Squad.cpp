//
// Created by Roman Malkevych on 7/11/17.
//

#include "Squad.h"

Squad::Squad()
{
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
	return ;
}

int Squad::getCount() const
{
	return (this->numberOfUnits);
}

ISpaceMarine* Squad::getUnit( int ) const
{
	int i = 0;
	int count = this->getCount();
	List *temp;
	temp = beginList;
	while (i < count)
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


//		List *elem = new List;
//
//		elem->elemMarine = newISpaceMarine;
//		elem->next = NULL;
//
//		endList = beginList;
//		while (endList->next)
//			endList = endList->next;
//		endList->next = elem;
	}
	this->numberOfUnits++;
	return ( this->numberOfUnits );
}

void Squad::setNumberOfUnits( int newNumberOfUnits )
{
	this->numberOfUnits = newNumberOfUnits;
	return ;
}

Squad& Squad::operator=(Squad const &rhs)
{
	std::cout << "Assignation operator Squad called" << std::endl;

	this->setNumberOfUnits(rhs.getCount());
	return *this;
}