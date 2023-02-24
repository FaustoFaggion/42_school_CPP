#include "Array.hpp"

int	main(void) {

	Array<int> a(3);
	Array<std::string> str(3);

	std::cout << "\n\n";
	try {
		a[0] = 1;
		a[1] = 2;
		a[2] = 3;
		std::cout << a;
		std::cout << "a size: " << a.size() << std::endl;
	}
	catch(std::exception &e) {
		std::cout<< e.what();
	}

	std::cout << "\n\n";
	try {
		str[0] = "AA";
		str[1] = "BB";
		str[2] = "CC";
	}
	catch(std::exception &e) {
		std::cout<< e.what();
	}
	std::cout << str << std::endl;
	std::cout << "str size: " << str.size() << std::endl;

	std::cout << "\n\n";
	Array<int>b(a);
	std::cout << b << std::endl;
	std::cout << "b(a) size: " << b.size() << std::endl;

	std::cout << "\n\n";
	Array<int>c = b;
	std::cout << c << std::endl;
	std::cout << "c = b size: " << b.size() << std::endl;

	std::cout << "\n\n";
	try {
		str[4] = "ss";
		str[0] = "AA";
		str[1] = "BB";
		str[2] = "CC";
	}
	catch(std::exception &e) {
		std::cout<< e.what();
	}
	std::cout << "\n";
	std::cout << str << std::endl;
	std::cout << "str size: " << str.size() << std::endl;
}