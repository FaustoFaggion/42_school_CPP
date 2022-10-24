#include "Data.hpp"

int	main(void) {

	Data		a("Joao e Raoni", 33);
	uintptr_t	b;
	Data		*c;

	b = serialize(&a);

	c = deserialize(b);
	std::cout<< "a: " << a << std::endl;
	std::cout<< "b: " << b << std::endl;
	std::cout<< "c: " << *c << std::endl;

}