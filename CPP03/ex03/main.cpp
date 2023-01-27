#include "DiamondTrap.hpp"

int main (void) {


	DiamondTrap	e("E_diamond");

	ClapTrap	*f = new DiamondTrap("John");

	std::cout << "\n--------ClapTrap *f = new DIamond()--------" << std::endl;
	std::cout << f->getName() << std::endl;
	
	std::cout << "\n--------DiamondTrap--------" << std::endl;
	std::cout << e << std::endl;
	
	ClapTrap	a("A_ClapTrap");
	e.attack(a.getName());
	std::cout << e << std::endl;
	e.takeDamage(6);
	std::cout << e << std::endl;
	e.berepaired(6);
	std::cout << e << std::endl;
	
	std::cout << "\n--------whoAmI--------" << std::endl;
	e.whoAmI();

	std::cout << "\n--------Construct g--------" << std::endl;
	DiamondTrap	g("G_diamond");
	DiamondTrap h(g);
	std::cout << "\n--------whoAmI g--------" << std::endl;
	g.whoAmI();
	std::cout << "\n--------whoAmI h--------" << std::endl;
	h.whoAmI();
	std::cout << "\n--------operator = (g = e)--------" << std::endl;
	g = e;
	g.whoAmI();
	
	std::cout << "\n--------Construct i--------" << std::endl;
	DiamondTrap	*i = new DiamondTrap("I_Diamond");
	std::cout << "\n--------whoAmI i--------" << std::endl;
	i->whoAmI();
	std::cout << "\n--------delete i--------" << std::endl;
	delete i;
	std::cout << "\n--------operator = (i = g = e)--------" << std::endl;
	i = &g;
	i->whoAmI();

	std::cout << "\n--------Destructors--------" << std::endl;

	delete f;
	return (0);
}