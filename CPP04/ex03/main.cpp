#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

int main(void) {

	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());
		ICharacter* me = new Character("me");
		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);
		ICharacter* bob = new Character("bob");
		me->use(0, *bob);
		me->use(1, *bob);
		delete bob;
		delete me;
		delete src;
	}

	{
		std::cout << "\n\n";
		  std::cout << "***Amateria tests***" << std::endl;
    	AMateria *m1 = new Ice();
    	AMateria *m2 = new Cure();
    	std::cout << "Materia1: " << m1->getType() << std::endl;
    	std::cout << "Materia2: " << m2->getType() << std::endl;

    	AMateria *m3 = m1->clone();
    	AMateria *m4 = m2->clone();
    	std::cout << "Materia3 cloned: " << m3->getType() << std::endl;
    	std::cout << "Materia4 cloned: " << m4->getType() << std::endl;

		AMateria* m5 = new Cure();
    	AMateria* m6 = new Ice();
		std::cout << "Materia5: " << m5->getType() << std::endl;
    	std::cout << "Materia6: " << m6->getType() << std::endl;
    	std::cout << std::endl;

    	AMateria *tmp_cure;
    	AMateria *tmp_ice;
    	std::cout << "***Materia Sources tests***" << std::endl;
    	IMateriaSource *ms_tmp = new MateriaSource();
    	ms_tmp->learnMateria(m1);
		ms_tmp->learnMateria(m2);
		ms_tmp->learnMateria(m3);
    	ms_tmp->learnMateria(m4);
    	ms_tmp->learnMateria(m5);
    	ms_tmp->learnMateria(m6);
		
		tmp_cure = ms_tmp->createMateria("Batata");
    	if (!tmp_cure)
    	    std::cout << "no materia" << std::endl;
    	
		tmp_cure = ms_tmp->createMateria("cure");
    	tmp_ice = ms_tmp->createMateria("ice");
    	std::cout << tmp_cure->getType() << std::endl;
    	std::cout << tmp_ice->getType() << std::endl;

		delete tmp_cure;
		delete tmp_ice;
    	delete ms_tmp;
	}

	{
		AMateria *m1 = new Ice();
    	AMateria *m2 = new Cure();

		IMateriaSource *ms_tmp = new MateriaSource();
		ms_tmp->learnMateria(m1);
		ms_tmp->learnMateria(m2);
		AMateria *tmp1;
    	AMateria *tmp2;
		AMateria *tmp3;
		AMateria *tmp4;
		AMateria *tmp5;
		tmp1 = ms_tmp->createMateria("cure");
    	tmp2 = ms_tmp->createMateria("ice");
		tmp3 = ms_tmp->createMateria("cure");
		tmp4 = ms_tmp->createMateria("ice");
		tmp5 = ms_tmp->createMateria("cure");

    	std::cout << "\n***Player tests***\n" << std::endl;
    	
		Character *p1 = new Character("Player1");
    	Character *p2 = new Character("Enemy");

    	std::cout << "Player1 name: " << p1->getName() << std::endl;
    	std::cout << "Player2 name: " << p2->getName() << std::endl;

    	p1->equip(tmp1);
    	p1->equip(tmp2);
    	p1->equip(tmp3);
    	p1->equip(tmp4);
    	p1->equip(tmp5);
    	for (int i = 0; i < 4; i++){
    	    p1->use(i, *p2);
    	}
    	std::cout << "unequip slot 1: " << std::endl;
    	p1->unequip(1);
		p1->unequip(3);
    	std::cout << "empty slot: " << std::endl;
    	p1->use(1, *p2);
    	std::cout << "filled slot: " << std::endl;
    	p1->use(2, *p2);

    	delete ms_tmp;
		//delete tmp5;
    	delete p2;
    	delete p1;
	}

	return (0);
}