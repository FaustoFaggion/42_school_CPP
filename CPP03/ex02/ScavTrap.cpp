#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	std::cout << "ScavTrap constructor called!!" << std::endl;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackDamage(20);
}

ScavTrap::ScavTrap(const ScavTrap& src): ClapTrap(src) {
	std::cout << "ScavTrap copy Constructor " << this->getName() << " called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called!!" << std::endl;
}

void	ScavTrap::attack(const std::string& target) {
	
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target <<
			" causing " << this->getAttackDamage() << " points of damage!" << std::endl;
		this->setEnergyPoints(this->getEnergyPoints() - 1);
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	std::cout << "Gate keeper mode on!!" << std::endl;
}