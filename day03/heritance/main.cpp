//
// Created by Roman Malkevych on 7/4/17.
//

#include "heritage.h"

int main()
{
	Animal *rockfeller = new Rockfeller;

	Rockfeller *b = (Rockfeller*)rockfeller;
	rockfeller->drink();
	b->eatMeat();

delete rockfeller;

}