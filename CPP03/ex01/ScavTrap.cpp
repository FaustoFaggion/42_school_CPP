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

void	ScavTrap::guardGate() {
	std::cout << "Gate keeper mode on!!" << std::endl;
}