#include "ClapTrap.hpp"

int main (void) {

	ClapTrap	a("Pepe");
	ClapTrap	b("Ronaldo");

	std::cout << a << std::endl;
	a.attack(b.getName());
	std::cout << a << std::endl;
	a.takeDamage(6);
	std::cout << a << std::endl;
	a.berepaired(8);
	std::cout << a << std::endl;
	return (0);
}