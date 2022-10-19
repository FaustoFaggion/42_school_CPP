#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {

	private:
		std::string	_target;
		ShrubberyCreationForm();

	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &rsc);
		~ShrubberyCreationForm();
		
		std::string	const	&getTarget() const;

		void				createFile(std::string target);

		class FileFailOpenException : public std::exception {
			const char *what() const throw();
		};

		ShrubberyCreationForm const	&operator=(ShrubberyCreationForm const &rsc);
};

#endif