#include "ScavTrap.hpp"

int main (void) {

	ClapTrap	a("Pepe");
	ClapTrap	b("Ronaldo");

	ScavTrap	c("Jonas");

	std::cout << "--------ScavTrap c--------" << std::endl;
	c.guardGate();
	std::cout << c << std::endl;
	c.attack(a.getName());
	std::cout << c << std::endl;
	c.takeDamage(6);
	std::cout << c << std::endl;
	c.berepaired(12);
	std::cout << c << std::endl;
	c.takeDamage(106);
	std::cout << c << std::endl;
	c.attack(a.getName());

	std::cout << "--------Destructor--------" << std::endl;
	return (0);
}