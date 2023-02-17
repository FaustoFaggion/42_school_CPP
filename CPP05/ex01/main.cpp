#include "Form.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	Form		*form;

/*
	std::cout << "\n-------------test2---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Gi", 1);
		std::cout << *soLove << std::endl;
		form = new Form("form", 4, 45);
		std::cout << *form << std::endl;
		try {
			form->beSigned(*soLove);
		}
		catch(Form::GradeTooHighException &e){
			delete soLove;
			delete form;
			throw e;
		}
		catch(Form::GradeTooLowException &e) {
			delete soLove;
			delete form;
			throw e;
		}

		std::cout << *form << std::endl;
		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
*/
	std::cout << "\n-------------Asigned---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucrat("Gi", 4);
		std::cout << *soLove << std::endl;
		form = new Form("form", 6, 15);
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
		std::cout << "PAREI AQUI" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}
	std::cout << "\n-------------Form low---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 333, 87);
		std::cout << "PAREI AQUI" << std::endl;
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-------------Form high---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 100, 0);
		std::cout << "PAREI AQUI" << std::endl;
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n-------------Form high to Bureaucrat---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 87, 1);
		std::cout << *form << std::endl;
		form->beSigned(*soLove);
		std::cout << *form << std::endl;
		std::cout << "PAREI AQUI" << std::endl;
		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

std::cout << "\n-------------Form high to Bureaucrat signForm---------------\n" << std::endl;
	try {
		form = NULL;
		soLove = NULL;
		soLove = new Bureaucrat("Gi", 3);
		std::cout << *soLove << std::endl;
		form = new Form("form", 1, 87);
		std::cout << *form << std::endl;
		soLove->signForm(*form);
		form->beSigned(*soLove);
		std::cout << "PAREI AQUI" << std::endl;
		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
		std::cout << e.what() << std::endl;
	}

	return (0);
}