#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form() {
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) :	Form("shrubbery", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm &rsc) : Form() {
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

void	ShrubberyCreationForm::createFile(std::string target) {
	std::fstream	writeFile;
	std::fstream	readFile;
	std::string		fileName;

	fileName = target + "_shrubbery";

	writeFile.open (fileName, std::fstream::in | std::fstream::out | std::fstream::trunc);
	if (writeFile.fail()){
		
	}

	readFile.open ("tree.txt", std::fstream::in | std::fstream::out);
	if (readFile.fail()){
		std::cout << "read_file fail to open!!" << std::endl;
		return ;
	}

	writeFile << readFile.rdbuf();
	readFile.close();
	writeFile.close();
}

ShrubberyCreationForm const	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rsc) {
	this->_target = rsc.getTarget();
	return (*this);
}