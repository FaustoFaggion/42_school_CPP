#include "Fixed.hpp"

int	main(void) {

	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;

	Fixed	c(10.2f);

	std::cout << "c: " << c << std::endl;
	std::cout << "c + 1: " << c + 1 << std::endl;
	std::cout << "c - 1: " << c - 1 << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "c / 2: " << c / 2 << std::endl;
	std::cout << "c : " << c << std::endl;
	std::cout << "c < 5: " << (c < 5) << std::endl;
	std::cout << "c > 5: " << (c > 5) << std::endl;
	if (c == 10.2f)
		std::cout << "c == 10.2f: " << std::endl;
	if (c <= 10.2f)
		std::cout << "c <= 10.2f: " << std::endl;
	if (c >= 10.2f)
		std::cout << "c >= 10.2f: " << std::endl;
	return (0);
}