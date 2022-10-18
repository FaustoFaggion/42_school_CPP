#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		std::string	_name;
		int			_grade;
		bool		_sign;
	public:
		AForm();
		AForm(std::string name, int grade);
		AForm(AForm const &rsc);
		virtual ~AForm();

		std::string	const	&getName() const;
		bool const			&getSign() const;
		int const			&getGrade() const;
		void				setName(std::string name);
		void				setSign(int sign);
		void				setSign(bool sign);
		
		void				beSigned(Bureaucrat const &responsable);

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		AForm const	&operator=(AForm const & rsc);
};

std::ostream	&operator<<(std::ostream &lhs, AForm &rhs);

#endif