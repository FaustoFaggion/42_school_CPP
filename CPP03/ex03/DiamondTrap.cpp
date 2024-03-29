#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap("DiamondTrap_clap_name"), ScavTrap(), FragTrap(), name("DiamondTrap"){

	hitPoints =  FragTrap::getHitPoints();
	energyPoints = ScavTrap::getEnergyPoints();
	attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap default constructor called!!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name) {

	this->name = name;
	hitPoints =  FragTrap::getHitPoints();
	energyPoints = ScavTrap::getEnergyPoints();
	attackDamage = FragTrap::getAttackDamage();
	std::cout << "DiamondTrap constructor " << this->name << " called!!" << std::endl;
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
	ClapTrap::name = this->name + "_clap_name";
	FragTrap::hitPoints = rhs.getHitPoints();
	ScavTrap::energyPoints = rhs.getEnergyPoints();
	FragTrap::attackDamage = rhs.getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(std::string const &target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
	std::cout <<"DiamondTrap name: "<< this->name << std::endl;
}