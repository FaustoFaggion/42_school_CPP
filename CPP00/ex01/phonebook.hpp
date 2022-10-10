#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "contact.hpp"
#include <iostream>

class PhoneBook {
	private:
		Contact list[8];
		int		n_contacts;
	public:
		PhoneBook(void);
		~PhoneBook(void);

		void setContact(int i, std::string f_name, std::string l_name,
			std::string n_name, std::string phone, std::string secret);

		int	nameValidation(std::string name);

		int	phoneValidation(std::string phone);
		
		int	secretValidation(std::string secret);

		void	addContact(std::string f_name, std::string l_name,
			std::string n_name, std::string phone, std::string secret);
		
		void	searchContact(void);

		std::string	isSizeOk(std::string paramter);
};

#endif