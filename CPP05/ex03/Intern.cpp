#include "Intern.hpp"
#include <cstring>


Form	*Intern::makeForm(const std::string name, std::string target) {
	
	Form	*form;
	int	opt;
	std::string	names[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	for (int i = 0; i < 3; i++) {
		if (names[i].compare(name)) {
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
			std::cout << "Intern creates " << name << std::endl;
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			std::cout << "Intern creates " << name << std::endl;
			break;
		default:
			std::cout << "Form does not exist!!!" << std::endl;
			break;
		}
		return (form);
}