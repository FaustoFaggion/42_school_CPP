#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45) {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :	AForm("robotomy request", 72, 45) {
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &rsc) :
		AForm(rsc.getName(), rsc.getGradeSign(), rsc.getGradeExec()) {
	*this = rsc;
}

RobotomyRequestForm::~RobotomyRequestForm() {
}

std::string const	&RobotomyRequestForm::getTarget() const {
	return (this->_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeExec() )
		throw GradeTooLowException();
	else if (this->getSign() == false)
		throw NotSignedException();
	else  {
		int	n;
		srand(time(0));

		n = rand() % 2;
		if (n % 2 == 0) {
			std::cout << "drilling noise!!!" << std::endl;
			std::cout << this->_target << " has been robotomized successfully!!!" << std::endl;
		}
		else {
			std::cout << "drilling noise!!!" << std::endl;
			std::cout << "robotomy failed!!!" << std::endl;
		}
	}
}

RobotomyRequestForm const	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rsc) {
	this->setSign(rsc.getSign());
	this->_target = rsc.getTarget();
	return (*this);
}
