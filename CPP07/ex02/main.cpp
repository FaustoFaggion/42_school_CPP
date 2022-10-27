#include "Array.hpp"

int	main(void) {

	Array<int> a(3);

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	std::cout << a << std::endl;
}