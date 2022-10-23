#include "Convert.hpp"
#include <iostream>
#include <string.h>

int	main (int argc, char *argv[]) {


	if (argc != 2) {
		std::cout << "Incorrect number of arguments!!!" << std::endl;
		return (1);
	}
	Convert	input(argv[1]);
}