#include "Form.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	Form		*form;

	soLove = new Bureaucrat("Linda", 1);

	try {
		form = new Form("vamo", 140);
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;
		delete form;
	}
	catch (std::exception *e) {
		std::cout << e->what();
	}

	return (0);
}