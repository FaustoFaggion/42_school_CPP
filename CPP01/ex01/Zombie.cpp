#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::Zombie(std::string name){
	
	this->name = name;
}

Zombie::~Zombie(){
	return ;
}

void	Zombie::announce(void){

	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}