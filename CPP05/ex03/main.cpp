#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	Intern		someIntern;
	AForm		*form = NULL;

	std::cout << "\n-------------Make Form Shr---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 1);
		form = someIntern.makeForm ("shr creation", "home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	std::cout << "\n-------------Make Form Shrubbery---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 1);
		form = someIntern.makeForm ("shrubbery creation", "home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	std::cout << "\n\n-------------Make Form Robotomy---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 1);
		form = someIntern.makeForm("robotomy request", "home");
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	std::cout << "\n\n-------------Make Form Presidential---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 1);
		form = someIntern.makeForm("presidential pardon", "home");
		
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);
		
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);
		
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	std::cout << "\n\n-------------Shrubbery Bureaucrat too low---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 150);
		form = someIntern.makeForm ("shrubbery creation", "home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	std::cout << "\n\n-------------Robotomy Bureaucrat too low---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 150);
		form = someIntern.makeForm("robotomy request", "home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	std::cout << "\n\n-------------Presidential Bureaucrat execute too low---------------\n" << std::endl;
	try {
		soLove = new Bureaucrat("Giovana", 20);
		form = someIntern.makeForm ("presidential pardon", "home");
		std::cout << "\n------------Sign a form----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to sign again----------\n" << std::endl;
		soLove->signForm(*form);
		std::cout << "\n------------Try to execute----------\n" << std::endl;
		soLove->executeForm(*form);

		delete soLove;
		delete form;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
		if (soLove != NULL)
			delete soLove;
		if (form != NULL)
			delete form;
	}

	return (0);
}
