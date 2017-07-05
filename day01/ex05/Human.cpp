
#include "Human.h"

const Brain &Human::getBrain() const
{
	return this->brain;
}

std::string Human::identify()
{
	return this->brain.identify();
}

Human::Human()
{
	return ;
}

Human::~Human()
{
	return ;
}
