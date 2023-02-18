#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void) {

	Bureaucrat	*soLove;
	soLove = new Bureaucrat("Giovana", 1);

	ShrubberyCreationForm		*shrubbery;
	ShrubberyCreationForm		shrubbery2;

	shrubbery = new ShrubberyCreationForm("home");
	std::cout << "ShrubberyCreationForm 1\n" << std::endl;
	std::cout << *shrubbery << std::endl;
	
	std::cout << "ShrubberyCreationForm 2\n" << std::endl;
	shrubbery2 = *shrubbery;
	std::cout << shrubbery2 << std::endl;
	
	std::cout << "ShrubberyCreationForm 1\n" << std::endl;
	shrubbery->beSigned(*soLove);
	std::cout << *shrubbery << std::endl;
	
	shrubbery2 = *shrubbery;
	std::cout << " ShrubberyCreationForm2\n" << std::endl;
	std::cout << shrubbery2 << std::endl;

	RobotomyRequestForm		*robot;
	RobotomyRequestForm		robot2;

	robot = new RobotomyRequestForm("home");
	std::cout << "RobotomyRequestForm 1\n" << std::endl;
	std::cout << *robot << std::endl;
	
	std::cout << "RobotomyRequestForm 2\n" << std::endl;
	robot2 = *robot;
	std::cout << robot2 << std::endl;
	
	std::cout << "RobotomyRequestForm 1\n" << std::endl;
	robot->beSigned(*soLove);
	std::cout << *robot << std::endl;
	
	robot2 = *robot;
	std::cout << " RobotomyRequestForm2\n" << std::endl;
	std::cout << robot2 << std::endl;
	
	PresidentialPardonForm		*pres;
	PresidentialPardonForm		pres2;

	pres = new PresidentialPardonForm("home");
	std::cout << "PresidentialPardonForm 1\n" << std::endl;
	std::cout << *pres << std::endl;
	
	std::cout << "PresidentialPardonForm 2\n" << std::endl;
	pres2 = *pres;
	std::cout << pres2 << std::endl;
	
	std::cout << "PresidentialPardonForm 1\n" << std::endl;
	pres->beSigned(*soLove);
	std::cout << *pres << std::endl;
	
	pres2 = *pres;
	std::cout << " PresidentialPardonForm2\n" << std::endl;
	std::cout << pres2 << std::endl;
	
	delete soLove;
	delete shrubbery;
	delete robot;
	delete pres;
	
	// Bureaucrat	*soLove;
	// ShrubberyCreationForm		*shrubbery;
	// RobotomyRequestForm			*robot;
	// PresidentialPardonForm		*presid;

	// std::cout << "\n-------------Sign Shrubbery---------------\n" << std::endl;
	// try {
	// 	soLove = new Bureaucrat("Giovana", 137);
	// 	shrubbery = new ShrubberyCreationForm("home");

	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*shrubbery);
	// 	std::cout << "\n------------Sign a form----------\n" << std::endl;
	// 	soLove->signForm(*shrubbery);
	// 	std::cout << "\n------------Try to sign again----------\n" << std::endl;
	// 	soLove->signForm(*shrubbery);
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*shrubbery);
		
	// 	delete soLove;
	// 	delete shrubbery;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// 	if (soLove != NULL)
	// 		delete soLove;
	// 	if (shrubbery != NULL)
	// 		delete shrubbery;
	// }

	// std::cout << "\n-------------Sign Robotomy---------------\n" << std::endl;
	// try {
	// 	soLove = new Bureaucrat("Giovana", 1);
	// 	robot = new RobotomyRequestForm("home");
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*robot);
	// 	std::cout << "\n------------Sign a form----------\n" << std::endl;
	// 	soLove->signForm(*robot);
	// 	std::cout << "\n------------Try to sign again----------\n" << std::endl;
	// 	soLove->signForm(*robot);
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*robot);

	// 	delete soLove;
	// 	delete robot;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// 	if (soLove != NULL)
	// 		delete soLove;
	// 	if (robot != NULL)
	// 		delete robot;
	// }

	// std::cout << "\n-------------Sign Presidential---------------\n" << std::endl;
	// try {
	// 	soLove = new Bureaucrat("Giovana", 1);
	// 	presid = new PresidentialPardonForm("home");
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*presid);
	// 	std::cout << "\n------------Sign a form----------\n" << std::endl;
	// 	soLove->signForm(*presid);
	// 	std::cout << "\n------------Try to sign again----------\n" << std::endl;
	// 	soLove->signForm(*presid);
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*presid);

	// 	delete soLove;
	// 	delete presid;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// 	if (soLove != NULL)
	// 		delete soLove;
	// 	if (presid != NULL)
	// 		delete presid;
	// }

	// std::cout << "\n-------------Shrubbery Bureaucrat too low---------------\n" << std::endl;
	// try {
	// 	soLove = new Bureaucrat("Giovana", 150);
	// 	shrubbery = new ShrubberyCreationForm("home");
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*shrubbery);
	// 	std::cout << "\n------------Sign a form----------\n" << std::endl;
	// 	soLove->signForm(*shrubbery);
	// 	std::cout << "\n------------Try to sign again----------\n" << std::endl;
	// 	soLove->signForm(*shrubbery);
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*shrubbery);

	// 	delete soLove;
	// 	delete shrubbery;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// 	if (soLove != NULL)
	// 		delete soLove;
	// 	if (shrubbery != NULL)
	// 		delete shrubbery;
	// }

	// std::cout << "\n-------------Robotomy Bureaucrat too low---------------\n" << std::endl;
	// try {
	// 	soLove = new Bureaucrat("Giovana", 150);
	// 	robot = new RobotomyRequestForm("home");
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*robot);
	// 	std::cout << "\n------------Sign a form----------\n" << std::endl;
	// 	soLove->signForm(*robot);
	// 	std::cout << "\n------------Try to sign again----------\n" << std::endl;
	// 	soLove->signForm(*robot);
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*robot);

	// 	delete soLove;
	// 	delete robot;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// 	if (soLove != NULL)
	// 		delete soLove;
	// 	if (robot != NULL)
	// 		delete robot;
	// }

	// std::cout << "\n-------------Presidential Bureaucrat too low---------------\n" << std::endl;
	// try {
	// 	soLove = new Bureaucrat("Giovana", 150);
	// 	presid = new PresidentialPardonForm("home");
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*presid);
	// 	std::cout << "\n------------Sign a form----------\n" << std::endl;
	// 	soLove->signForm(*presid);
	// 	std::cout << "\n------------Try to sign again----------\n" << std::endl;
	// 	soLove->signForm(*presid);
	// 	std::cout << "\n------------Try to execute----------\n" << std::endl;
	// 	soLove->executeForm(*presid);

	// 	delete soLove;
	// 	delete presid;
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// 	if (soLove != NULL)
	// 		delete soLove;
	// 	if (presid != NULL)
	// 		delete presid;
	// }

	return (0);
}