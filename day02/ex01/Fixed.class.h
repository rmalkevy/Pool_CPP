//
// Created by Roman Malkevych on 6/23/17.
//

#ifndef FIXED_CLASS_H
#define FIXED_CLASS_H

#include <iostream>
#include <cmath>

class Fixed
{
private:
	static const int fract_bits;
	int		_value;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const & instance);
	~Fixed();

	float	toFloat( void ) const;
	int		toInt( void ) const;

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	Fixed &	operator=( Fixed const & rhs );

};

std::ostream &	operator<<( std::ostream & o, Fixed const & rhs);


























class Integer
{
private:
	int _n;

public:
	Integer(int const n);
	~Integer(void);

	int getValue(void) const;

	Integer &	operator=( Integer const & rhs );
	Integer 	operator+( Integer const & rhs ) const;
};

std::ostream &	operator<<( std::ostream & o, Integer const & rhs);
#endif
