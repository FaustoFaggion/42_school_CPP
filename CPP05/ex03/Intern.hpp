#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {

	public:
//		Intern(void);
// 		Intern(Intern const &src);
//		~Intern(void);
		
		AForm	*makeForm(const std::string name, std::string target);

		class FormDoesNotExistException : public std::exception {
			const char *what() const throw();

//		Intern const &operator=(const Intern& rhs);
	};

};

#endif