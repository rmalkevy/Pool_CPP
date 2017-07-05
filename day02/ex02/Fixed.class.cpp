//
// Created by Roman Malkevych on 6/23/17.
//

#include "Fixed.class.h"

const int Fixed::fract_bits = 8;

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
	if (a > b)
		return (a);
	else
		return (b);
}

Fixed::Fixed()
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(Fixed const & instance)
{
	//std::cout << "Copy constructor called" << std::endl;
	this->_value = instance.getRawBits();
	return ;
}

Fixed::Fixed(const int num)
{
	setRawBits(num << this->fract_bits);
}

Fixed::Fixed(const float num)
{
	setRawBits((int)roundf(num * 256.0f));
}

float Fixed::toFloat() const
{
	return ((float)this->_value / 256.0f);
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
	return this->_value;
}

void Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

Fixed& Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;

	this->_value  = rhs.getRawBits();
	return *this;
}

bool Fixed::operator<( Fixed const & one)
{
	return (this->getRawBits() < one.getRawBits());
}

bool Fixed::operator>( Fixed const & one  )
{
	return (this->getRawBits() > one.getRawBits());
}

bool Fixed::operator<=( Fixed const & one  )
{
	return (this->getRawBits() <= one.getRawBits());
}

bool Fixed::operator>=( Fixed const & one  )
{
	return (this->getRawBits() >= one.getRawBits());
}

bool Fixed::operator==( Fixed const & one  )
{
	return (this->getRawBits() == one.getRawBits());
}

bool Fixed::operator!=( Fixed const & one  )
{
	return (this->getRawBits() != one.getRawBits());
}

Fixed& Fixed::operator++()
{
	++this->_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed fixed(*this);
	++(*this);
	return (fixed);
}

Fixed& Fixed::operator--()
{
	--this->_value;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed fixed(*this);
	--(*this);
	return (fixed);
}

Fixed Fixed::operator+( Fixed const & one  )
{
	Fixed fixed(this->getRawBits() + one.getRawBits());
	return (fixed);
}

Fixed Fixed::operator-( Fixed const & one  )
{
	Fixed fixed(this->getRawBits() - one.getRawBits());
	return (fixed);
}

Fixed Fixed::operator*( Fixed const & one  )
{
	Fixed fixed(this->getRawBits() * one.getRawBits());
	return (fixed);
}

Fixed Fixed::operator/( Fixed const & one  )
{
	Fixed fixed(this->getRawBits() / one.getRawBits());
	return (fixed);
}

std::ostream& operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.getRawBits();
	return ( o );
}





















