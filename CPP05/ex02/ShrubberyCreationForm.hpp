#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

	private:
		std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &rsc);
		~ShrubberyCreationForm();
		
		std::string	const	&getTarget() const;

		void				execute(Bureaucrat const &executor) const;

		class FileFailOpenException : public std::exception {
			const char *what() const throw();
		};

		ShrubberyCreationForm const	&operator=(ShrubberyCreationForm const &rsc);
};

#endif