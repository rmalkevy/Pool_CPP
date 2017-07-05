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
	int _value;

public:
	Fixed();
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const &instance);
	~Fixed();
	static Fixed &max(Fixed &a, Fixed &b);
	static Fixed &min(Fixed &a, Fixed &b);
	float toFloat(void) const;
	int toInt(void) const;
	int getRawBits(void) const;
	void setRawBits(int const raw);
	Fixed &operator=(Fixed const &rhs);
	bool operator<(Fixed const &one);
	bool operator>(Fixed const &one);
	bool operator>=(Fixed const &one);
	bool operator<=(Fixed const &one);
	bool operator==(Fixed const &one);
	bool operator!=(Fixed const &one);
	Fixed &operator++(void);
	Fixed operator++(int);
	Fixed &operator--(void);
	Fixed operator--(int);
	Fixed operator+(Fixed const &one);
	Fixed operator-(Fixed const &one);
	Fixed operator*(Fixed const &one);
	Fixed operator/(Fixed const &one);
};

// Почитати про статичні функції //
std::ostream &operator<<(std::ostream &o, Fixed const &rhs);
#endif
