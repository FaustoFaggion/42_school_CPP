#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :	Form("presidential", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &rsc) : Form() {
	*this = rsc;
}

PresidentialPardonForm::~PresidentialPardonForm() {
}

std::string const	&PresidentialPardonForm::getTarget() const {
	return (this->_target);
}

void	PresidentialPardonForm::exec(std::string target) {
	
	std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;

}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (executor.getGrade() > this->getGradeExec() )
		throw GradeTooLowException();
	else if (this->getSign() == true)
		throw AlreadySignedException();
	else 
		std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox " << std::endl;
}

PresidentialPardonForm const	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}