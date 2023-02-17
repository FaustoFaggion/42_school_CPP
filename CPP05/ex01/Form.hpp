#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		std::string const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
		bool				_sign;
	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form const &rsc);
		~Form();

		std::string	const	&getName() const;
		bool const			&getSign() const;
		int const			&getGradeSign() const;
		int const			&getGradeExec() const;

		void				beSigned(Bureaucrat const &responsable);

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		Form const	&operator=(Form const & rsc);
};

std::ostream	&operator<<(std::ostream &lhs, Form &rhs);

#endif