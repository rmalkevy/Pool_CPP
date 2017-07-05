#include "pony.h"

void	ponyOnTheHeap(void)
{
	std::cout << "start pony on the Heap" << std::endl;
	Pony *pony1 = new Pony;
	delete pony1;
	std::cout << "end work on the Heap" << std::endl;

	return ;
}

void	ponyOnTheStack(void)
{
	std::cout << "start pony on the Stack" << std::endl;
	Pony pony;
	std::cout << "end work on the Stack" << std::endl;

	return ;
}

int main()
{
	ponyOnTheHeap();
	ponyOnTheStack();
	return (0);
}
