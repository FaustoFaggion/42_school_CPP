#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string.h>
#include <exception>
#include "Bureaucrat.hpp"

class Form
{
	private:
		std::string	_name;
		int			_grade;
		bool		_sign;
	public:
		Form();
		Form(std::string name, int grade);
		Form(Form const &rsc);
		~Form();

		std::string	const	&getName() const;
		bool const			&getSign() const;
		int const			&getGrade() const;
		void				setSign(bool sign);

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		void	beSigned(Bureaucrat const &responsable);

		Form const	&operator=(Form const & rsc);
};

std::ostream	&operator<<(std::ostream &lhs, Form &rhs);

#endif