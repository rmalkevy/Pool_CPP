#include <iostream>

int main(int argc, char **argv)
{
	int i;
	int a;

	a = 0;
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else if (argc > 1)
	{
		while (argv[++a])
		{
			i = -1;
			while (argv[a][++i])
				argv[a][i] = toupper(argv[a][i]);
			std::cout << argv[a];
		}
		std::cout << std::endl;
	}
	return (0);
}
