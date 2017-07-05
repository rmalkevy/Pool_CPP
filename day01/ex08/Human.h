//
// Created by Roman Malkevych on 6/22/17.
//

#ifndef HUMAN_H
# define HUMAN_H
# include <iostream>

class Human
{
private:
	void meleeAttack(std::string const & target);
	void rangedAttack(std::string const & target);
	void intimidatingShout(std::string const & target);

public:
	void action(std::string const & action_name, std::string const & target);
};
#endif
