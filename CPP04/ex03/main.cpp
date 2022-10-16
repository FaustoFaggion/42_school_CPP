#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void) {

	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());

	delete src;

	Character	player1("Nanda");
	Character	player2("Fê");
	Ice			ice;
	Ice			*iceCopy = ice.clone();

	std::cout << "________Intanciation________\n" <<std::endl;
	std::cout << ice <<std::endl;
	std::cout << player1 <<std::endl;
	std::cout << player2 <<std::endl;

	std::cout << "\n________COPY________\n" <<std::endl;

	std::cout << "\n________EQUIP________\n" <<std::endl;

	player1.equip(iceCopy);
	player1.equip(new Cure());
	player1.equip(new Ice());
	player1.use(0, player2);
	player1.use(1, player2);

	std::cout << "\n________UNEQUIP________\n" <<std::endl;
	
//	player1.unequip(1);
//	player1.equip(new Ice());
//	player1.use(0, player2);
//	player1.use(1, player2);

	std::cout << "\n________Destructor________\n" <<std::endl;


	return (0);
}