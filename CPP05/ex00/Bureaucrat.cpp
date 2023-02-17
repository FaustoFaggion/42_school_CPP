#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("default"), _grade(1) {
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &rsc):
								_name(rsc.getName()), _grade(rsc.getGrade()) {
	*this = rsc;
}

Bureaucrat::~Bureaucrat() {

}

std::string const	&Bureaucrat::getName() const {
	return (this->_name);
}

int const	&Bureaucrat::getGrade() const{
	return (this->_grade);
}

void	Bureaucrat::increment() {
	if (this->getGrade() == 1)
		throw GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrement() {
	if (this->getGrade() == 150)
		throw GradeTooLowException();
	this->_grade++;
}

const char	*Bureaucrat::GradeTooLowException::what() const throw() {
	return ("grade too low");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw() {
	return ("grade too high");
}

Bureaucrat	const &Bureaucrat::operator=(Bureaucrat const &rsc) {
	this->_grade = rsc.getGrade();
	return(*this);
}

std::ostream	&operator<<(std::ostream &lhs, Bureaucrat &rhs) {
	lhs << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();

	return (lhs);
}