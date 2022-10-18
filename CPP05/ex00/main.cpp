#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	
	try {

		soLove = new Bureaucrat("Gi", -1);
		std::cout << soLove << std::endl;
		delete soLove;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {

		soLove = new Bureaucrat("Gra", 151);
		std::cout << soLove << std::endl;
		delete soLove;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {

		soLove = new Bureaucrat("Elisa", 1);
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {

		soLove = new Bureaucrat("Linda", 150);
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}