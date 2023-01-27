#include "DiamondTrap.hpp"

int main (void) {


	DiamondTrap	e("Bob");

	ClapTrap	*f = new DiamondTrap("John");

	std::cout << "--------ClapTrap *f = new DIamond()--------" << std::endl;
	std::cout << f->getName() << std::endl;
	
	std::cout << "--------DiamondTrap--------" << std::endl;
	std::cout << e << std::endl;
	
	ClapTrap	a("Pepe");
	e.attack(a.getName());
	std::cout << e << std::endl;
	e.takeDamage(6);
	std::cout << e << std::endl;
	e.berepaired(6);
	std::cout << e << std::endl;
	
	std::cout << "--------whoAmI--------" << std::endl;
	e.whoAmI();

	std::cout << "--------Destructors--------" << std::endl;

	delete f;
	return (0);
}