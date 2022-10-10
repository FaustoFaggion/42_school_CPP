#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->weapon = NULL;
}

std::string HumanB::getName(){
	return (this->name);
}

std::string HumanB::getWeapon(){
	return ((*this->weapon).getType());
}

void	HumanB::setWeapon(Weapon& weapon){
	this->weapon = &weapon;
}

void	HumanB::attack(){
	std::cout << this->getName() << "attacks with their" << this->getWeapon() << std::endl;
}
