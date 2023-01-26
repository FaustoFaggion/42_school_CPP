#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap() {
	
	name = "ScavTrap";
	hitPoints = 100;
	energyPoints = 50;
	attackDamage =  20;
	std::cout << "ScavTrap default constructor called!!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {

	hitPoints = 100;
	energyPoints = 50;
	attackDamage =  20;
	std::cout << "ScavTrap constructor called!!" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap& src) : ClapTrap() {
	*this = src;
	std::cout << "ScavTrap copy Constructor " << this->getName() << " called" << std::endl;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called!!" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap &rhs) {

	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = getAttackDamage();
	return (*this);
}

void	ScavTrap::attack(const std::string& target) {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ScavTrap " << this->getName() << " attacks " << target <<
			" causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
		if (this->energyPoints < 0)
			this->energyPoints = 0;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ScavTrap::guardGate() {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "Gate keeper mode on!!" << std::endl;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}

}