#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap(), name("DiamondTrap"){

	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << "DiamondTrap default constructor called!!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {

	this->name = name;
	ClapTrap::name = name + "_clap_name";
	FragTrap::hitPoints = 100;
	ScavTrap::energyPoints = 50;
	FragTrap::attackDamage = 30;
	std::cout << "DiamondTrap constructor called!!" << std::endl;
	std::cout << this->name << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& src) : ClapTrap(), ScavTrap(), FragTrap() {
	*this = src;
	std::cout << "DiamondTrap copy Constructor " << this->getName() << " called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap destructor called!!" << std::endl;
}

std::string const	&DiamondTrap::getName() const {
	return (this->name);
}

void		DiamondTrap::setName(std::string name) {
	this->name = name;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &rhs) {

	this->name = rhs.getName();
	FragTrap::hitPoints = rhs.getHitPoints();
	ScavTrap::energyPoints = rhs.getEnergyPoints();
	FragTrap::attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
	std::cout <<"DiamondTrap name: "<< this->name << std::endl;
}