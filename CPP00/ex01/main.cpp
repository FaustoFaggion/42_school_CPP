#include "main.hpp"

void	addCommand(PhoneBook &thePhonebook)
{
	std::string	first_name;
	std::string	last_name;
	std::string	nick_name;
	std::string	phone_number;
	std::string	darkest_secret;

	std::cout << "First Name: " << std::endl;
	std::getline(std::cin, first_name);
	std::cout << "Last Name: " << std::endl;
	std::getline(std::cin, last_name);
	std::cout << "Nick Name: " << std::endl;
	std::getline(std::cin, nick_name);
	std::cout << "Phone Number (00)0000-0000: " << std::endl;
	std::getline(std::cin, phone_number);
	std::cout << "Darkest Secret: " << std::endl;
	std::getline(std::cin, darkest_secret);
	thePhonebook.addContact(first_name, last_name, nick_name, phone_number, darkest_secret);
}

void	searchCommand(PhoneBook &thePhonebook)
{
	thePhonebook.searchContact();
}

int	main(void)
{
	std::string	command;
	PhoneBook	thePhonebook;

	while (1){
		std::cout << "\nPhonebook\n" << std::endl;
		std::cout << "Enter Command:	ADD		SEARCH		EXIT" << std::endl;
		std::getline(std::cin, command);
		if (command == "ADD"){
			addCommand(thePhonebook);
		}
		else if (command == "SEARCH"){
			searchCommand(thePhonebook);
		}
		else if (command == "EXIT"){
			return (0);
		}
		else{
			std::cout << "Enter a valid command" << std::endl;
		}
	}
	return (0);
}
