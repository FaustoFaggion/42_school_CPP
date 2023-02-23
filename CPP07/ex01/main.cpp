#include "iter.hpp"

template<typename T>
void	show(T& value) {
	std::cout << "&value" << std::endl;
	std::cout << value << std::endl;
}

template<typename T>
void	show_ptr(T *value) {
	std::cout << "*value p" << std::endl;
	std::cout << *value << std::endl;
}


int	main(void) {

	char		c[2] = {'A', 'B'};
	int			array[5] = {0, 1, 2, 3, 4};
	std::string	str[2] = {"RAoni", "Pepe"};

	int			a = 2;
	int			*ptr[5] = {&a, &a, &a, &a, &a};

	iter(c, 2, &show);
	std::cout << "\n";
	iter(str, 2, &show);
	std::cout << "\n";
	iter(array, 5, &show);
	std::cout << "\n";
	iter(ptr, 5, &show_ptr);
	
	return (0);
}