//
// Created by Roman Malkevych on 6/22/17.
//

#include "Human.h"

void Human::action(std::string const &action_name, std::string const &target)
{
	int i;

	i = -1;
	typedef void (Human::*FunctionPointer)(const std::string &);
	FunctionPointer FunctionPointers[3];
	FunctionPointers[0] = &Human::intimidatingShout;
	FunctionPointers[1] = &Human::meleeAttack;
	FunctionPointers[2] = &Human::rangedAttack;

	std::string array[3] = {"intimidatingShout", "meleeAttack", "rangedAttack"};
//	while (++i < 3 && !action_name.compare(array[i]))
//		(this->*FunctionPointers[i])(target);
// if else if forbidden // You can do it with action_name into int 0,1,2
	if (!action_name.compare("intimidatingShout"))
		(this->*FunctionPointers[0])(target);
	else if (!action_name.compare("meleeAttack"))
		(this->*FunctionPointers[1])(target);
	else if (!action_name.compare("rangedAttack"))
		(this->*FunctionPointers[2])(target);
	return ;
}

void Human::intimidatingShout(std::string const & target)
{
	std::cout << target << ", I know, you want die quickly... But I have another plans... Hahhhaaha!!!!!!" << std::endl;
	return ;
}

void Human::meleeAttack(std::string const &target)
{
	std::cout << target << " getting hit in the face, bullshit!!!!" << std::endl;
	return ;
}

void Human::rangedAttack(std::string const &target)
{
	std::cout << "We will reset 20 bombs to the  " << target << ", and then will be clearing of the territory from the enemy troops" << std::endl;
	return ;
}