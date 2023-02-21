#include "AForm.hpp"

AForm::AForm() : _name("xxx"),	_gradeSign(0),
								_gradeExec(0),
								_sign(false) {
}

AForm::AForm(std::string name, int gradeSign, int gradeExec) :	_name(name),
																_gradeSign(gradeSign),
																_gradeExec(gradeExec),
																_sign(false) {
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	if (gradeExec < 1 || gradeSign > 150)
		throw GradeTooLowException();
}

AForm::AForm(AForm const &rsc) :	_name(rsc.getName()),
									_gradeSign(rsc.getGradeSign()),
									_gradeExec(rsc.getGradeExec()) {
	*this = rsc;
}

AForm::~AForm(){

}

std::string const	&AForm::getName() const {
	return (this->_name);
}

int const	&AForm::getGradeSign() const {
	return (this->_gradeSign);
}

int const	&AForm::getGradeExec() const {
	return (this->_gradeExec);
}

bool const	&AForm::getSign() const {
	return (this->_sign);
}

void	AForm::setSign(bool	sign) {
	this->_sign = sign;
}

void	AForm::beSigned(Bureaucrat const &responsable) {

	if (responsable.getGrade() > this->getGradeSign()) {
		throw GradeTooLowException();
	}
	if (this->getSign() == true)
		throw AlreadySignedException();
	else {
		this->setSign(true);
	}

}

void	AForm::execute(Bureaucrat const &executor) const {
	if (this->getGradeExec() < executor.getGrade())
		throw GradeTooLowException();
	if (this->getSign() == false)
		throw NotSignedException();
}

const char	*AForm::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char	*AForm::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

const char *AForm::NotSignedException::what() const throw() {
	return ("form not signed yet!!!");
}

const char *AForm::AlreadySignedException::what() const throw() {
	return ("form already signed!!!");
}

AForm const	&AForm::operator=(AForm const &rsc) {
	std::cout << "Operator = AForm called" << std::endl;
	this->_sign = rsc.getSign();
	
	return (*this);
}

std::ostream	&operator<<(std::ostream &lhs, AForm &rhs) {
	lhs << "AForm name: " <<rhs.getName() << std::endl;
	lhs << "Grade sign required: " << rhs.getGradeSign() << std::endl;
	lhs << "Grade exec required: " << rhs.getGradeExec() << std::endl;
	lhs << "Signed? " << rhs.getSign() << std::endl;

	return (lhs);
}