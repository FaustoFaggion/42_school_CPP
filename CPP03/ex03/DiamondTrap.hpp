#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

	private:
		std::string	name;

	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap& rsc);
		~DiamondTrap();

		std::string	getName();
		void		setName(std::string name);

		DiamondTrap	&operator=(DiamondTrap &rhs);

		void	attack(const std::string& target);
		void	whoAmI();
};

#endif