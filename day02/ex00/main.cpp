//
// Created by Roman Malkevych on 6/23/17.
//

#include "Fixed.class.h"

typedef int int_fixed;

//#define FRACT_BITS 8
//#define FIXED_POINT_ONE (1 << FRACT_BITS)
//#define MAKE_INT_FIXED(x) ((x) << FRACT_BITS)
//#define MAKE_FLOAT_FIXED(x) ((int_fixed)((x) * FIXED_POINT_ONE))
//#define MAKE_FIXED_INT(x) ((x) >> FRACT_BITS)
//#define MAKE_FIXED_FLOAT(x) (((float)(x)) / FIXED_POINT_ONE)
//
//#define FIXED_MULT(x, y) ((x)*(y) >> FRACT_BITS)
//#define FIXED_DIV(x, y) (((x)<<FRACT_BITS) / (y))


#define SHIFT_AMOUNT 8 // 2^16 = 65536
#define SHIFT_MASK ((1 << SHIFT_AMOUNT) - 1) // 65535 (all LSB set, all MSB clear)

int main(void)
{
//	Integer fixed(23);
//	Integer fixe(100);
//
//	Integer aa(1);
//	aa = fixe + fixed;
//
//	std::cout << aa << std::endl;
//
//
//
//
//
//
//
//
//	int_fixed fixed_x = MAKE_FLOAT_FIXED( 444.555555f );
//	int_fixed fixed_y = MAKE_INT_FIXED( 1 );
//
//	int_fixed fixed_result = FIXED_MULT( fixed_x, fixed_y );
//	printf( "%.1f\n", MAKE_FIXED_FLOAT( fixed_result ) );
//
//	fixed_result = FIXED_DIV( fixed_result, fixed_y );
//	printf( "%.1f\n", MAKE_FIXED_FLOAT( fixed_result ) );


	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;


	int price = 500 << SHIFT_AMOUNT;
	price += 10 << SHIFT_AMOUNT;
	price *= 3;
	price /= 4;
	printf("price is %d\n", price >> SHIFT_AMOUNT);
	printf ("price fraction is %d\n", price & SHIFT_MASK);
	printf("price fraction in decimal is %f\n", ((double)(price & SHIFT_MASK) / (1 << SHIFT_AMOUNT)));

	return (0);
}