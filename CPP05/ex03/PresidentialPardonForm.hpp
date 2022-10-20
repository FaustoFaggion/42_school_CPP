#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string.h>
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	private:
		std::string	_target;
		PresidentialPardonForm();
	
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &rsc);
		~PresidentialPardonForm();

		std::string	const				&getTarget() const;

		void							exec(std::string target);
		void							execute(Bureaucrat const &executor) const;

		PresidentialPardonForm const	&operator=(PresidentialPardonForm const &rsc);
};

#endif