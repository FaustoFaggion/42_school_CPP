#include "Harl.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void	Harl::debug(void){
    std::cout << "[ " << "DEBUG" << " ]" << std::endl;
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
    std::cout<< std::endl;
}

void	Harl::info(void){
    std::cout << "[ " << "INFO" << " ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! If you did, ";
	std::cout << "I wouldn’t be asking for more!" << std::endl;
    std::cout<< std::endl;
}

void	Harl::warning(void){
    std::cout << "[ " << "WARNING" << " ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started "; 
	std::cout << "working here since last month." << std::endl;
    std::cout<< std::endl;
}

void	Harl::error(void){
    std::cout << "[ " << "ERROR" << " ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout<< std::endl;
}

void Harl::notValid(void){
  std::cerr << "I am not sure how tired I am today";
}

void	Harl::complain(std::string level){
	
    int opt;

	std::string levelLog[4] = {"debug", "info", "warning", "error"};
	void	(Harl::*function[5])(void) = {&Harl::debug, &Harl::info,
                                &Harl::warning, &Harl::error, &Harl::notValid};
	
    opt = 4;
    for (int i = 0; i < 4; i++){
		if (!levelLog[i].compare(level)) {
            opt = i;
            break ;
        }
	}
    switch(opt){
        case 0:
            for (int i = opt; i < 4; i++)
                (this->*function[i])();
            break;
        case 1:
            for (int i = opt; i < 4; i++)
                (this->*function[i])();
            break;
        case 2:
            for (int i = opt; i < 4; i++)
                (this->*function[i])();
            break;
        case 3:
            (this->*function[opt])();
            break;
        default:
            (this->*function[4])();
    }
	return;
}