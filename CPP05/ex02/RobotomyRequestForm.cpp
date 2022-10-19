#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :	Form("robotomy", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rsc) : Form() {
	*this = rsc;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::string const	&RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void	RobotomyRequestForm::executeRandon(std::string target) {
	int	n;
	srand(time(0));

	n = rand() % 2;

	if (n % 2 == 0)
		std::cout << target << " has been robotomized successfully!!!" << std::endl;
	else
		std::cout << "robotomy failed!!!" << std::endl;
}

RobotomyRequestForm const	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}
