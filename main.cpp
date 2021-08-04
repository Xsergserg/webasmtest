#include "calculator.h"

int main(){
	std::cout << calculator("25+25") << std::endl;
	std::cout << calculator("25-15") << std::endl;
	std::cout << calculator("25*25.5") << std::endl;
	std::cout << calculator("25/25") << std::endl;
	std::cout << calculator("25/0") << std::endl;
	std::cout << calculator("2525") << std::endl;
	std::cout << calculator("25df+25") << std::endl;
	std::cout << calculator("df+25") << std::endl;

	return (0);
}
