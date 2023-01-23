#include <iostream>

int	main(void) {

	std::string		str = "Hi THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "memory addr str: " << &str << std::endl;
	std::cout << "memory addr stringPTR: " << &stringPTR << std::endl;
	std::cout << "memory addr stringREF: " << &stringREF << std::endl;
	
	std::cout << "str: " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;
	return (0);
}
