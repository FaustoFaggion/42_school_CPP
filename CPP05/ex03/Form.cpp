#include "Form.hpp"

Form::Form() : _name("xxx"),	_gradeSign(0),
								_gradeExec(0),
								_sign(false) {
}

Form::Form(std::string name, int gradeSign, int gradeExec) :	_name(name),
																_gradeSign(gradeSign),
																_gradeExec(gradeExec),
																_sign(false) {
	if (gradeSign < 1)
		throw GradeTooHighException();
	if (gradeSign > 150)
		throw GradeTooLowException();
}

Form::Form(Form const &rsc) :	_name(rsc.getName()),
									_gradeSign(rsc.getGradeSign()),
									_gradeExec(rsc.getGradeExec()) {
	*this = rsc;
}

Form::~Form(){

}

std::string const	&Form::getName() const {
	return (this->_name);
}

int const	&Form::getGradeSign() const {
	return (this->_gradeSign);
}

int const	&Form::getGradeExec() const {
	return (this->_gradeExec);
}

bool const	&Form::getSign() const {
	return (this->_sign);
}

void	Form::setSign(int sign) {
	this->_sign = sign;
}

void	Form::setSign(bool	sign) {
	this->_sign = sign;
}

void	Form::beSigned(Bureaucrat const &responsable) {

	if (responsable.getGrade() > this->getGradeSign()) {
		throw GradeTooLowException();
	}
	else if (this->getSign() == true)
		throw AlreadySignedException();
	else {
		this->setSign(true);
	}

}

const char	*Form::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char	*Form::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

const char *Form::AlreadySignedException::what() const throw() {
	return ("form already signed!!!");
}

Form const	&Form::operator=(Form const &rsc) {
	this->_sign = rsc.getSign();
	return (*this);
}

std::ostream	&operator<<(std::ostream &lhs, Form &rhs) {
	lhs << "AForm name: " <<rhs.getName() << std::endl;
	lhs << "Grade sign required: " << rhs.getGradeSign() << std::endl;
	lhs << "Grade exec required: " << rhs.getGradeExec() << std::endl;
	lhs << "Signed? " << rhs.getSign() << std::endl;

	return (lhs);
}