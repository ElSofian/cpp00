#include "Phonebook.hpp"

void	print(std::string str)
{
	if (str.length() > 10)
		std::cout << str.substr(0, 9) << ".";
	else
		std::cout << std::setw(10) << std::right << str;
}

int stringToInt(const std::string &str)
{
	std::stringstream ss(str);
	int num;
	ss >> num;
	if (ss.fail())
		return -1;
	return num;
}
