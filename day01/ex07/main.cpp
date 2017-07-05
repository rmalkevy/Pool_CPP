//
// Created by Roman Malkevych on 6/21/17.
//

#include <iostream>
#include <fstream>

void replaceAll(std::string& text, const std::string& from, const std::string& to) {
	if (from.empty())
		return ;
	size_t start_pos = 0;
	while ((start_pos = text.find(from, start_pos)) != std::string::npos) {
		text.replace(start_pos, from.length(), to);
		start_pos += to.length();
	}
}

int main(int ac, char **argv)
{
	if (ac == 4)
	{
		std::string toStr = argv[3];
		std::string fromStr = argv[2];
		std::string text;
		std::string buffer;

		std::ifstream ifs(argv[1]);
		if (ifs.is_open())
		{
			while ( std::getline(ifs, buffer) )
			{
				text += buffer;
				if (!ifs.eof())
					text += "\n";
			}
			ifs.close();
		}
		else std::cout << "Unable to open file" << std::endl;

		replaceAll(text, fromStr, toStr);
		std::string namefile = argv[1];
		namefile += ".replace";
		std::ofstream ofs(namefile);
		ofs << text;
	}
	else
		std::cout << "You can promt 3 params: 1) filename 2) str1 3) str2" << std::endl;
	return 0;
}