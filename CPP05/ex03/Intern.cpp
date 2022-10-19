#include "Intern.hpp"


Form	*Intern::makeForm(std::string name, std::string target) {
	
	Form	*form;
	int	opt;
	std::string	names[3] = {"shrubbery", "robotomy", "presidential"};

	for (int i = 0; i < 3; i++) {
		if (names[i] == name) {
			opt = i;
			break;
		}
	}
		switch (opt)
		{
		case 0:
			form = new ShrubberyCreationForm(target);
			break;
		case 1:
			form = new RobotomyRequestForm(target);
			break;
		case 2:
			form = new PresidentialPardonForm(target);
			break;
		default:
			std::cout << "Form does not exist!!!" << std::endl;
			break;
		}
		return (form);
}