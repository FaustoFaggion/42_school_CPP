#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name) {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClpaTrap constructor " << this->getName() << " called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src){
	std::cout << "ClapTrap copy Constructor " << this->getName() << " called" << std::endl;
	*this = src;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &rhs) {
	std::cout << "ClapTrap copy assignment operator called\n";
	this->name = rhs.name;
	this->hitPoints = rhs.hitPoints;
	this->energyPoints = rhs.energyPoints;
	this->attackDamage = rhs.attackDamage;
  return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor " << this->getName() << " called" << std::endl;
}

std::string	ClapTrap::getName() {
	return (this->name);
}

int	ClapTrap::getHitPoints() {
	return (this->hitPoints);
}

int	ClapTrap::getEnergyPoints() {
	return (this->energyPoints);
}

int	ClapTrap::getAttackDamage() {
	return (this->attackDamage);
}

void	ClapTrap::setHitPoints(int hitPoints) {
	this->hitPoints = hitPoints;
}

void	ClapTrap::setEnergyPoints(int energyPoints) {
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDamage(int attackDamage) {
	this->attackDamage = attackDamage;
}
void	ClapTrap::attack(const std::string& target) {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " attacks " << target <<
			" causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoints--;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount) {
	
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " take damage of " 
		<< amount << " points!!!" << std::endl;
		this->hitPoints -= amount;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

void	ClapTrap::berepaired(unsigned int amount) {
		
	if (hitPoints > 0 && energyPoints > 0) {
		std::cout << "ClapTrap " << this->getName() << " repairs " 
			<< amount << " points!!!" << std::endl;
		this->hitPoints += amount;
		this->energyPoints--;
	}
	else {
		std::cout << "Can't do anything!" << std::endl;
	}
}

std::ostream&	operator << (std::ostream& lhs, ClapTrap& rhs) {
	lhs << " " << rhs.getName() << std::endl;
	lhs << "	" << " hitPoints: " << rhs.getHitPoints() << std::endl;
	lhs << "	" <<	" energyPoints: " << rhs.getEnergyPoints() << std::endl;
	lhs << "	" << " attackDamage: " <<	rhs.getAttackDamage() << std::endl;

	return (lhs);
}
