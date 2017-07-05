//
// Created by Roman Malkevych on 6/23/17.
//

#include "Fixed.class.h"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const & instance)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = instance;
}

Fixed::Fixed(const int num)
{
	setRawBits(num << this->fract_bits);
}

Fixed::Fixed(const float num)
{
	setRawBits((int)roundf(num * 256));
}

float Fixed::toFloat() const
{
	int fixed;

	fixed = getRawBits();
	return ((float)fixed / 256);
}

int Fixed::toInt() const
{
	int fixed;

	fixed = getRawBits();
	return (fixed >> this->fract_bits);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_value  = rhs.getRawBits();
	return *this;
}

//std::ostream& Fixed::operator<<(std::ostream &o, Fixed const &rhs)
//{
//	o << rhs.getRawBits();
//	return ( o );
//}













Integer::Integer(int const n) : _n( n )
{
	std::cout << "Constructor called with value " << n << std::endl;
	return ;
}

Integer::~Integer()
{
	std::cout << "Destructor called with value " << _n << std::endl;
	return ;
}

int Integer::getValue() const
{
	return (this->_n);
}

Integer& Integer::operator=(Integer const &rhs)
{
	std::cout << "Assignation operator called from " << this->_n;
	std::cout << " to " << rhs.getValue() << std::endl;

	this->_n  = rhs.getValue();
	return *this;
}

Integer Integer::operator+(Integer const &rhs) const
{
	std::cout << "Addition operator called with " << this->_n;
	std::cout << " and " << rhs.getValue() << std::endl;

	return (Integer(this->_n + rhs.getValue()));
}

std::ostream &	operator<<( std::ostream & o, Integer const & rhs )
{
	o << rhs.getValue();
	return ( o );
}














