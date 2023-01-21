#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon){ }

std::string	HumanA::getName(){
	return(this->name);
}

std::string HumanA::getWeapon(){
	return (weapon.getType());
}

void	HumanA::attack(){
	std::cout << this->getName() << " attacks with their " << this->getWeapon()
																   << std::endl;
}