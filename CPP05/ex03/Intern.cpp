#include "Intern.hpp"
#include <cstring>

const char *Intern::FormDoesNotExistException::what() const throw() {
		return ("Form does not exist!!!");
};

Form	*Intern::makeForm(const std::string name, std::string target) {
	
	Form	*form;
	int		opt = 3;

	std::string	names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (names[i].compare(name) == 0) {
			opt = i;
			break;
		}
	}
	switch (opt)
	{
	case 0:
		form = new ShrubberyCreationForm(target);
		std::cout << "Intern creates " << name << std::endl;
		break;
	case 1:
		form = new RobotomyRequestForm(target);
		std::cout << "Intern creates " << form->getName() << std::endl;
		break;
	case 2:
		form = new PresidentialPardonForm(target);
		std::cout << "Intern creates " << name << std::endl;
		break;
	case 3:
		throw FormDoesNotExistException();
	}
	return (form);
}