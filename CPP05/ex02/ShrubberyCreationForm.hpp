#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm {

	private:
		int	_gradeExec;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm &rsc);
		~ShrubberyCreationForm();

		int const					&getGradeExec() const;
		
		void						createFile();

		class FileFailOpenException : public std::exception {
			const char *what() const throw();
		};
		
		ShrubberyCreationForm const	&operator=(ShrubberyCreationForm const &rsc);

};

#endif