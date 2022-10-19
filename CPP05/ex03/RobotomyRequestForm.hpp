#ifndef ROBOTOMYRERQUESTFORM_HPP
#define ROBOTOMYRERQUESTFORM_HPP

#include <iostream>
#include <string.h>
#include <cstdlib>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	private:
		std::string	_target;
		RobotomyRequestForm();
	
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm &rsc);
		~RobotomyRequestForm();

		std::string	const			&getTarget() const;

		void						executeRandon(std::string target);

		RobotomyRequestForm const	&operator=(RobotomyRequestForm const &rsc);
};

#endif