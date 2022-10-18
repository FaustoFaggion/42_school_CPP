#include "Form.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	Form		*form;

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
		form = new Form("form", 2, 45);
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
		form = new Form("form", 1, 56);
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
		form = new Form("form", 0, 87);
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