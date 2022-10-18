#ifndef ROBOTOMYRERQUESTFORM_HPP
#define ROBOTOMYRERQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include "AForm.hpp"

class RobotomyRequestForm : AForm() {
	private:
		int	_gradeExec;
	
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &rsc);
		~RobotomyRequestForm();

		int const	&getGrade() const;
		
};

#endif