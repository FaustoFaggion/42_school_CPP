#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public:
		Form	*makeForm(const std::string name, std::string target);

	class FormDoesNotExistException : public std::exception {
			const char *what() const throw();
	};

};

#endif