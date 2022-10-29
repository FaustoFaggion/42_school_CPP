#include "Intern.hpp"
/*
Intern::Intern(void) {
  return;
}

Intern::Intern(Intern const &src) {
  *this = src;
}

Intern::~Intern(void) {
  return;
}
*/
const char *Intern::FormDoesNotExistException::what() const throw() {
		return ("Form does not exist!!!");
};

AForm	*Intern::makeForm(const std::string name, std::string target) {
	
	AForm	*form;
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
/*
Intern const &Intern::operator=(const Intern& rhs) {
  (void)rhs;
  return (*this);
}
*/