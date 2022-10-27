#include "Array.hpp"

int	main(void) {

	Array<int> a(3);
	Array<std::string> str(3);

	a[0] = 1;
//	a[1] = 2;
	a[2] = 3;
	std::cout << a << std::endl;

	try {
		str[4] = "ss";
		str[0] = "AA";
		str[1] = "BB";
		str[2] = "CC";
	}
	catch(std::exception &e) {
		std::cout<< e.what();
	}
	std::cout << str << std::endl;
	std::cout << a.size() << std::endl;
	std::cout << str.size() << std::endl;
}