#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap() {
	
	setName("FragTrap");
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap default constructor called!!" << std::endl;
}

FragTrap::FragTrap(std::string const name) : ClapTrap(name) {
	
	setHitPoints(100);
	setEnergyPoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap constructor called!!" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src) : ClapTrap() {
	*this = src;
	std::cout << "FragTrap copy Constructor " << this->getName() << " called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap destructor called!!" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &rhs) {

	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = getAttackDamage();
	return (*this);
}

void	FragTrap::highFiveGuys(void) {
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "High Five request!" << std::endl;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}
