#include "iter.hpp"

int	main(void) {

	char	c[2] = {'A', 'B'};
	int		array[5] = {0, 1, 2, 3, 4};

	iter(array, 5, show);
	iter(array, 5, sum);
	iter(array, 5, show);

	iter(c, 2, show);
	iter(c, 2, sum);
	iter(c, 2, show);


}