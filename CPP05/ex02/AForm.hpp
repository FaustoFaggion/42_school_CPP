#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <string.h>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {

	private:
		std::string const	_name;
		int const			_gradeSign;
		int const			_gradeExec;
		bool				_sign;
	public:
		AForm();
		AForm(std::string name, int gradeSign, int gradeExec);
		AForm(AForm const &rsc);
		virtual ~AForm();

		std::string	const	&getName() const;
		bool const			&getSign() const;
		int const			&getGradeSign() const;
		int const			&getGradeExec() const;
		void				setName(std::string name);
		void				setSign(int sign);
		void				setSign(bool sign);
		
		void				beSigned(Bureaucrat const &responsable);
		virtual void		execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException : public std::exception {
			const char *what() const throw();
		};

		class GradeTooLowException : public std::exception {
			const char *what() const throw();
		};

		class NotSignedException : public std::exception {
			const char *what() const throw();
		};
		
		class AlreadySignedException : public std::exception {
			const char *what() const throw();
		};

		AForm const	&operator=(AForm const & rsc);
};

std::ostream	&operator<<(std::ostream &lhs, AForm &rhs);

#endif