#include "Point.hpp"

int	main(void) {

	Point	a(6, 6);
	Point	b(2, 2);
	Point	c(2, 9);
	Point	p(2,7);
	Fixed	w1;
	Fixed 	w2;
	
	std::cout << a << b << c << p << std::endl;

	if (bsp(a, b, c, p) == true)
		std::cout << "True" << std::endl;
	else
		std::cout << "False" << std::endl;
	return (0);
}
