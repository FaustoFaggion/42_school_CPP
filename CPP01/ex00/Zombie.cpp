#include "Zombie.hpp"

Zombie::Zombie(std::string z_name)
{
	name = z_name;
}

Zombie::~Zombie(void)
{
	std::cout << name << std::endl;

	return ;
}

void	Zombie::announce(void){

	std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}