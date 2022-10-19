#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	Form		*form;
	ShrubberyCreationForm		*shrubbery;
	RobotomyRequestForm			*robot;
	PresidentialPardonForm		*presid;
	
	std:: cout << "\n-------------Form Tests-----------------\n" << std::endl;
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

	std:: cout << "\n-------------End Form Tests-----------------\n" << std::endl;

	try {
		std::cout << "\n------------Test Shrubbery---------" << std::endl;
		soLove = new Bureaucrat("Giovana", 137);
		shrubbery = new ShrubberyCreationForm("home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*shrubbery);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*shrubbery);

		delete soLove;
		delete shrubbery;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------Test burocrat grad too low----------" << std::endl;
		soLove = new Bureaucrat("Giovana", 138);
		shrubbery = new ShrubberyCreationForm("home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*shrubbery);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*shrubbery);

		delete soLove;
		delete shrubbery;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------Test Robot---------" << std::endl;
		soLove = new Bureaucrat("Giovana", 45);
		robot = new RobotomyRequestForm("home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*robot);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*robot);

		delete soLove;
		delete robot;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------Test burocrat grad too low----------" << std::endl;
		soLove = new Bureaucrat("Giovana", 46);
		robot = new RobotomyRequestForm("home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*robot);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*robot);

		delete soLove;
		delete robot;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------Test Presidential---------" << std::endl;
		soLove = new Bureaucrat("Giovana", 5);
		presid = new PresidentialPardonForm("home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*presid);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*presid);

		delete soLove;
		delete presid;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "\n------------Test burocrat grad too low----------" << std::endl;
		soLove = new Bureaucrat("Giovana", 138);
		presid = new PresidentialPardonForm("home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*presid);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*presid);

		delete soLove;
		delete presid;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return (0);
}