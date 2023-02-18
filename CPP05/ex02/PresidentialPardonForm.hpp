#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string.h>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string	_target;
	
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm &rsc);
		~PresidentialPardonForm();

		std::string	const				&getTarget() const;

		void							execute(Bureaucrat const &executor) const;
		
		PresidentialPardonForm const	&operator=(PresidentialPardonForm const &rsc);
};

#endif