#include "Zombie.hpp"

int	main(){

	Zombie	*raoni;

	randomChump("Warley");
	raoni = newZombie("Raoni");
	raoni->announce();
	delete raoni;
}