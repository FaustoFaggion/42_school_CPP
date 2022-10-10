#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact {
	private:
		int			index;
		std::string first_name;
		std::string last_name;
		std::string nick_name;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact(void);
		~Contact(void);
	
	void	setIndex(int input_index);

	int		getIndex();
	
	void	setFirstName(std::string f_name);

	std::string	getFirstName();

	void	setLastName(std::string l_name);

	std::string	getLastName();

	void	setNickName(std::string n_name);

	std::string	getNickName();

	void	setPhoneNumber(std::string phone);

	std::string	getPhoneNumber();

	void	setDarkestSecret(std::string secret);

	std::string	getDarkestSecret();
};

#endif