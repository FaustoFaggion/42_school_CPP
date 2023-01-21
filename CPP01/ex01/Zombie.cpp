#include "Zombie.hpp"

Zombie::Zombie(void){
}

Zombie::Zombie(std::string name){
	
	this->name = name;
}

Zombie::~Zombie(void){
	return ;
}

void	Zombie::setName(std::string name){
	this->name = name;
}

void	Zombie::announce(void){

	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}