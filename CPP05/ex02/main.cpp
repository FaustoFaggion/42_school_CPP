#include "ShrubberyCreationForm.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	AForm		*form;
	ShrubberyCreationForm		*shrub;

	try {

		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		shrub = new ShrubberyCreationForm("treta");
		std::cout << *shrub << std::endl;
		shrub->createFile();
		delete soLove;
	
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	


	
	try {

		soLove = new Bureaucrat("Gi", -1);
		std::cout << soLove << std::endl;
		delete soLove;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		soLove = new Bureaucrat("Gi", 1);
		std::cout << *soLove << std::endl;
		form = new AForm("form", 2);
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		form = new AForm("form", 1);
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		form = new AForm("form", 0);
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}