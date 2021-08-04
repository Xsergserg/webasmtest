#include "calculator.h"

std::string calculator(std::string str) {
	std::string signs = "+-:*";
	std::string new_str;

	for (std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		if (signs.find(*it) != std::string::npos)
			new_str = new_str + " " + *it + " ";
		else
			new_str += *it;
	}
	std::cout << new_str << std::endl;

	return "OK";
}
