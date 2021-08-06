#include "calculator.h"

int main(){
	std::string str;

	while (1)
	{
		std::cout << "Input your example (\"exit\" for finish session): " << std::endl;
		std::getline(std::cin, str);
		if (str == "exit")
			return (0);
		std::cout << calculator(str) << std::endl;
	}
	return (0);
}
