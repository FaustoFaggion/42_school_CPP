#ifndef ROBOTOMYRERQUESTFORM_HPP
#define ROBOTOMYRERQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string	_target;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &rsc);
		~RobotomyRequestForm();

		std::string	const			&getTarget() const;

		void							execute(Bureaucrat const &executor) const;
		
		RobotomyRequestForm const	&operator=(RobotomyRequestForm const &rsc);
};

#endif