#include "Bureaucrat.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	
	std::cout << "\n-------------too low---------------\n" << std::endl;
	try {

		soLove = new Bureaucrat("Gi", 1111);
		std::cout << soLove << std::endl;
		delete soLove;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------too high---------------\n" << std::endl;
	try {

		soLove = new Bureaucrat("Gra", 0);
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------limit high---------------\n" << std::endl;
	try {

		soLove = new Bureaucrat("Elisa", 1);
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------limit low---------------\n" << std::endl;
	try {

		soLove = new Bureaucrat("Linda", 150);
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "\n-------------decrement---------------\n" << std::endl;
	try {

		soLove = new Bureaucrat("Linda", 150);
		soLove->decrement();
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
		delete soLove;
	}
	std::cout << "\n-------------increment---------------\n" << std::endl;
	try {

		soLove = new Bureaucrat("Elisa", 1);
		soLove->increment();
		std::cout << *soLove << std::endl;
		delete soLove;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
		delete soLove;
	}

}