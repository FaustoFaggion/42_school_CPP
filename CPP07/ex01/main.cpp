#include "iter.hpp"

int	main(void) {

	char	c[2] = {'A', 'B'};
	int		array[5] = {0, 1, 2, 3, 4};

	iter<int>(array, 5, show<int>);
	iter<int>(array, 5, sum<int>);
	iter<int>(array, 5, show<int>);

	iter<char>(c, 2, show<char>);
	iter<char>(c, 2, sum<char>);
	iter<char>(c, 2, show<char>);

	return (0);
}