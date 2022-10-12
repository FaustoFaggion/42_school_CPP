#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main (void) {

	ClapTrap	a("Pepe");
	ClapTrap	b("Ronaldo");

	std::cout << a << std::endl;
	a.attack(b.getName());
	std::cout << a << std::endl;
	a.takeDamage(6);
	std::cout << a << std::endl;
	a.berepaired(6);
	std::cout << a << std::endl;

	ScavTrap	c("Jonas");

	std::cout << c << std::endl;
	c.attack(a.getName());
	std::cout << c << std::endl;
	c.takeDamage(6);
	std::cout << c << std::endl;
	c.berepaired(6);
	std::cout << c << std::endl;

	FragTrap	d("Frag");

	std::cout << d << std::endl;
	d.attack(c.getName());
	std::cout << d << std::endl;
	d.takeDamage(6);
	std::cout << d << std::endl;
	d.berepaired(6);
	std::cout << d << std::endl;
	d.highFiveGuys();

	return (0);
}