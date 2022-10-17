#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string.h>

class Bureaucrat {

	protected:
		std::string _name;
		int			_grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name);
		Bureaucrat(Bureaucrat const &rsc);
		~Bureaucrat();
};

#endif