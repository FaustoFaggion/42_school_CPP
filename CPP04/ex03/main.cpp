#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void) {

	std::cout << "________Intanciation________\n" <<std::endl;
	
	IMateriaSource	*src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter	*me = new Character("me");
	ICharacter	*sister = new Character("sister");

	std::cout << "\n________COPY________\n" <<std::endl;
	AMateria	* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);
	
	std::cout << "\n________USE________\n" <<std::endl;
	me->use(0, *sister);
	me->use(1, *sister);

	std::cout << "\n________UNEQUIP________\n" <<std::endl;
	
	me->unequip(0);
	me->unequip(1);

	std::cout << "\n________Destructor________\n" <<std::endl;

	delete me;
	delete sister;
	delete src;
	
	return (0);
}