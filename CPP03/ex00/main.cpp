#include "ClapTrap.hpp"

int main (void) {

	ClapTrap	a("Pepe");
	ClapTrap	b("Ronaldo");

	std::cout << a << std::endl;
	std::cout << b << std::endl;
	a.attack(b.getName());
	std::cout << a << std::endl;
	a.takeDamage(6);
	std::cout << a << std::endl;
	a.takeDamage(4);
	std::cout << a << std::endl;
	a.berepaired(8);
	std::cout << a << std::endl;

	b.takeDamage(4);
	std::cout << b << std::endl;
	b.berepaired(2);
	std::cout << b << std::endl;
	return (0);
}