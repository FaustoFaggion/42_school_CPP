#include "iter.hpp"

int	main(void) {

	char		c[2] = {'A', 'B'};
	int			array[5] = {0, 1, 2, 3, 4};
	std::string	str[2] = {"RAoni", "Pepe"};

	int			a = 2;
	int			*ptr[5] = {&a, &a, &a, &a, &a};

	iter<int*>(ptr, 4, show<int*>);
	iter<std::string>(str, 2, show<std::string>);
	iter<int>(array, 5, show<int>);
	iter<int>(array, 5, sum<int>);
	iter<int>(array, 5, show<int>);
	
	iter<char>(c, 2, show<char>);
	iter<char>(c, 2, sum<char>);
	iter<char>(c, 2, show<char>);

	return (0);
}