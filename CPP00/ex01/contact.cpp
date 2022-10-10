#include "contact.hpp"

Contact::Contact(void)
{
	first_name = " ";
	last_name = " ";
	nick_name = " ";
	phone_number = " ";
	darkest_secret = " ";
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::setIndex(int input_index){
	index = input_index;
}

int	Contact::getIndex(){
	return (index);
}

void	Contact::setFirstName(std::string f_name){
	first_name = f_name;
	}

std::string	Contact::getFirstName(){
	return (first_name);
}

void	Contact::setLastName(std::string l_name){
	last_name = l_name;
}

std::string	Contact::getLastName(){
	return (last_name);
}

void	Contact::setNickName(std::string n_name){
	nick_name = n_name;
}

std::string	Contact::getNickName(){
	return (nick_name);
}

void	Contact::setPhoneNumber(std::string phone){
	phone_number = phone;
}

std::string	Contact::getPhoneNumber(){
	return (phone_number);
}

void	Contact::setDarkestSecret(std::string secret){
	darkest_secret = secret;
}

std::string	Contact::getDarkestSecret(){
	return (darkest_secret);
}
