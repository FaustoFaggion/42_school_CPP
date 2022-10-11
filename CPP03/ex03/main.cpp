#include "DiamondTrap.hpp"

int main (void) {

	ClapTrap	a("Pepe");

	DiamondTrap	e("Dia");

	std::cout << e << std::endl;
	e.attack(a.getName());
	std::cout << e << std::endl;
	e.takeDamage(6);
	std::cout << e << std::endl;
	e.berepaired(6);
	std::cout << e << std::endl;
	e.whoAmI();

	return (0);
}