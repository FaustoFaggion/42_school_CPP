#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :	AForm("shrubbery", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &rsc) : AForm() {
	*this = rsc;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

std::string	const &ShrubberyCreationForm::getTarget() const {
	return (this->_target);
}

const char *ShrubberyCreationForm::FileFailOpenException::what() const throw() {
	return ("file didn't open!!");
};

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	
	if (executor.getGrade() > this->getGradeExec() )
		throw GradeTooLowException();
	else if (this->getSign() == false)
		throw NotSignedException();
	else {
		std::fstream	writeFile;
		std::string		fileName;
		
		fileName = this->_target + "_shrubbery";
		writeFile.open (fileName, std::fstream::in | std::fstream::out | std::fstream::trunc);
		if (writeFile.fail()){
			
		}
		std::string		tree = "          &&& &&  & &&\n     && &//&/|& ()|/ @, &&	\n      &//(/&/&||/& /_/)_&/_&	\n   &() &//&|()|/&// '% & ()	\n  &_/_&&_/ |& |&&/&__%_/_& &&	\n&&   && & &| &| /& & % ()& /&&	\n ()&_---()&/&/|&&-&&--%---()~	\n     &&     /|||	\n             |||	\n             |||	\n             |||	\n       , -=-~  .-^- _	\n ";

		writeFile << tree;
		writeFile.close();
	}
}

ShrubberyCreationForm const	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}