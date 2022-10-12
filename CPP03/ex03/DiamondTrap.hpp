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
		DiamondTrap(std::string const name);
		DiamondTrap(DiamondTrap& rsc);
		~DiamondTrap();

		std::string	const &getName() const;
		void		setName(std::string name);

		DiamondTrap	&operator=(DiamondTrap const &rhs);

		void	attack(std::string const &target);
		void	whoAmI();
};

#endif