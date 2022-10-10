#include "Harl.hpp"

int	main(int argc, char *argv[]){

	Harl txt;

	if (argc != 2){
		std::cout << "Incorrect number of arguments!!" << std::endl;
		return (1);
	}
	txt.complain(argv[1]);
	return (0);
}