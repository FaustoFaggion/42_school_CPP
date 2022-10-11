#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(),  ScavTrap(), FragTrap(), name("DiamondTrap"){

	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
	std::cout << "DiamondTrap default constructor called!!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), ScavTrap(name), FragTrap(name) {

	this->name = name;
	ClapTrap::name = name + "_clap_name";
	this->setHitPoints(100);
	this->setEnergyPoints(50);
	this->setAttackDamage(30);
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

std::string	DiamondTrap::getName() {
	return (this->name);
}

void		DiamondTrap::setName(std::string name) {
	this->name = name;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &rhs) {

	this->name = rhs.getName();
	this->hitPoints = rhs.getHitPoints();
	this->energyPoints = rhs.getEnergyPoints();
	this->attackDamage = getAttackDamage();
	return (*this);
}

void	DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void) {

	std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
	std::cout <<"DiamondTrap name: "<< this->name << std::endl;
}