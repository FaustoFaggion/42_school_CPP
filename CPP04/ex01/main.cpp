#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int    main(void) {
    {
        std::cout << "\n----------ARRAY OF ANIMALS---------\n";
	    Animal    *animals[10];
        std::cout << "\n----------CAT AND DOG INSTANCE---------\n";
        Cat        cat;
        Dog        dog;
        std::cout << "\n----------MAKESOUND LOOP---------\n";
        for (size_t i = 0; i < 10; i++)
        {
            i % 2 ? animals[i] = new Cat : animals[i] = new Dog;
            animals[i]->makeSound();
        }

        std::cout << "\n---------DELETE ANIMALS----------\n";

        for (size_t i = 0; i < 10; i++){
            std::cout << "\n----------------\n";
            delete animals[i];
        }
    }
    std::cout << "\n-------------------\n";
    {
        std::cout << "\n----------CAT DEFAULT CONSTRUCTOR---------\n";
        Cat cat1;
        std::cout << "\n----------CAT COPY CONSTRUCTOR---------\n";
        Cat cat2(cat1);
        {
            Cat tmp = cat1;
        }
    }


    std::cout << "\n-------------------\n";
    {
        std::cout << "\n";
        Cat *cat = new Cat();
        std::cout << "\n";
        Cat *deepCopyCat = new Cat(*cat);
        std::cout << "\n";
        Dog *dog = new Dog();
        std::cout << "\n";
        Dog *deepCopyDog = new Dog(*dog);

        std::cout << "\n-----OPERATOR = ----------\n";
        Cat cat2 = *cat;
        
        std::cout << "\n-------------------\n";
        std::cout << &(cat->getBrain()) << std::endl;
        std::cout << &(deepCopyCat->getBrain()) << std::endl;
        std::cout << &(dog->getBrain()) << std::endl;
        std::cout << &(deepCopyDog->getBrain()) << std::endl;

        std::cout << "\n---------DESTRUCTORS----------\n";

        delete cat;
        delete deepCopyCat;
        delete dog;
        delete deepCopyDog;
    }
}

