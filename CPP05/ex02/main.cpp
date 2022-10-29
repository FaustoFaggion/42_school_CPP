#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	ShrubberyCreationForm		*shrubbery;
	RobotomyRequestForm			*robot;
	PresidentialPardonForm		*presid;

	std::cout << "\n-------------Sign Shrubbery---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 137);
		shrubbery = new ShrubberyCreationForm("home");

		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*shrubbery);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*shrubbery);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*shrubbery);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*shrubbery);
		
		delete soLove;
		delete shrubbery;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (shrubbery != NULL)
			delete shrubbery;
	}

	std::cout << "\n-------------Sign Robotomy---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 1);
		robot = new RobotomyRequestForm("home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*robot);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*robot);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*robot);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*robot);

		delete soLove;
		delete robot;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (robot != NULL)
			delete robot;
	}

	std::cout << "\n-------------Sign Presidential---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 1);
		presid = new PresidentialPardonForm("home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*presid);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*presid);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*presid);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*presid);

		delete soLove;
		delete presid;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (presid != NULL)
			delete presid;
	}

	std::cout << "\n-------------Shrubbery Bureaucrat too low---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 150);
		shrubbery = new ShrubberyCreationForm("home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*shrubbery);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*shrubbery);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*shrubbery);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*shrubbery);

		delete soLove;
		delete shrubbery;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (shrubbery != NULL)
			delete shrubbery;
	}

	std::cout << "\n-------------Robotomy Bureaucrat too low---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 150);
		robot = new RobotomyRequestForm("home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*robot);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*robot);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*robot);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*robot);

		delete soLove;
		delete robot;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (robot != NULL)
			delete robot;
	}

	std::cout << "\n-------------Presidential Bureaucrat too low---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 150);
		presid = new PresidentialPardonForm("home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*presid);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*presid);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*presid);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*presid);

		delete soLove;
		delete presid;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (presid != NULL)
			delete presid;
	}

	return (0);
}