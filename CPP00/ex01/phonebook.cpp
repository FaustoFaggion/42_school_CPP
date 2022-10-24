#include "phonebook.hpp"
#include <iomanip>

PhoneBook::PhoneBook(void)
{
	this->n_contacts = 0;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::setContact(int i, std::string f_name, std::string l_name,
	std::string n_name, std::string phone, std::string secret)
{
	list[i].setIndex(i + 1);
	list[i].setFirstName(f_name);
	list[i].setLastName(l_name);
	list[i].setNickName(n_name);
	list[i].setPhoneNumber(phone);
	list[i].setDarkestSecret(secret);
}

int	PhoneBook::nameValidation(std::string name)
{
	if (*name.begin() == ' ' || name == ""){
		std::cout << "ERROR: Name \"" << name << "\" not valid!!" << std::endl;
		return (0);
	}
	for (std::string::iterator it = name.begin(); it != name.end(); it++){
		if(!isalpha(*it)){
			if (*it != ' '){
				std::cout << "ERROR: Name \"" << name << "\" not valid!!"
					<< std::endl;
				return (0);
			}
		}
	}
	return (1);
}

int	PhoneBook::phoneValidation(std::string phone)
{
	if (*phone.begin() == ' ' || phone == ""){
		std::cout << "ERROR: Phone number empty!!" << std::endl;
		return (0);
	}
	if (phone.size() != 14){
		std::cout << "ERROR: Phone number format not valid!!" << std::endl;
		return (0);
	}
	if (phone[0] != '(' || !isdigit(phone[1]) || !isdigit(phone[2]) || phone[3] != ')'
		|| !isdigit(phone[4]) || !isdigit(phone[5]) || !isdigit(phone[6])
		|| !isdigit(phone[7]) || !isdigit(phone[8]) || phone[9] != '-'
		|| !isdigit(phone[10]) || !isdigit(phone[11]) || !isdigit(phone[12])
		|| !isdigit(phone[13])){
		std::cout << "ERROR: Phone number format not valid!!" << std::endl;
		return (0);
	}
	return (1);
}

int	PhoneBook::secretValidation(std::string secret)
{
	if (*secret.begin() == ' ' || secret == ""){
		std::cout << "ERROR: Darkest Secret empty!!" << std::endl;
		return (0);
	}
	return (1);
}

void	PhoneBook::addContact(std::string f_name, std::string l_name, std::string n_name, std::string phone, std::string secret)
{
	if (nameValidation(f_name) == 0)
		return ;
	else if (nameValidation(l_name) == 0)
		return ;
	else if (nameValidation(n_name) == 0)
		return ;
	else if (phoneValidation(phone) == 0)
		return ;
	else if (secretValidation(secret) == 0)
		return ;
	else{
		setContact(n_contacts, f_name, l_name, n_name, phone, secret);
		n_contacts++;
		if (n_contacts == 8)
			n_contacts = 0;
	}
}

void	PhoneBook::searchContact(void)
{
	int	index;

	for (int i = 0; i < 8; i++){
		if (list[i].getFirstName() != " "){
			std::cout << std::right << std::setw(10);
			std::cout << i + 1;
			std::cout << " |";
			std::cout << std::right << std::setw(10);
			std::cout << isSizeOk(list[i].getFirstName());
			std::cout << " |";
			std::cout << std::right << std::setw(10);
			std::cout << isSizeOk(list[i].getLastName());
			std::cout << " |";
			std::cout << std::right << std::setw(10);
			std::cout << isSizeOk(list[i].getNickName());
			std::cout << " |" << std::endl;
		}
	}
	std::cout << "Enter the Contact index: " << std::endl;
	std::cin >> index;
	if (index < 1 || index > 8){
		std::cout << "Please enter a valid digit from 1 to 8" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
	if (list[index -1].getFirstName() != " ")
	{
		std::cout << "\nFirst Name: " << list[index -1].getFirstName() << std::endl;
		std::cout << "Last Name: " << list[index -1].getLastName() << std::endl;
		std::cout << "Nick Name: " << list[index -1].getNickName() << std::endl;
		std::cout << "Phone Number: " << list[index -1].getPhoneNumber() << std::endl;
		std::cout << "Darkest Secret: " << list[index -1].getDarkestSecret() << std::endl;
	}
	else
		std::cout << "Please enter a contact from the list" << std::endl;
	std::cin.ignore(10000, '\n');
}

std::string	PhoneBook::isSizeOk(std::string paramter)
{
	if (paramter.size() > 10){
		paramter.resize(10);
		paramter[paramter.length() - 1] = '.';
	}
	return (paramter);
}
