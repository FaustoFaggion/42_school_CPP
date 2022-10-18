#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>
#include <exception>

class Bureaucrat {

	protected:
		std::string _name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &rsc);
		~Bureaucrat();

		std::string const	&getName() const;
		int const			&getGrade() const;

		void				increment();
		void				decrement();

		class	GradeTooHighException : public std::exception {
			const char		*what() const throw();
		};
		
		class	GradeTooLowException : public std::exception {
			const char		*what() const throw();
		};

		Bureaucrat	const 	&operator=(Bureaucrat const &rsc);
};

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs);

#endif