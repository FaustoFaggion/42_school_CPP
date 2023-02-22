#include "Base.hpp"
#include "BaseA.hpp"
#include "BaseB.hpp"
#include "BaseC.hpp"

Base::~Base() {
}

Base *generate(void) {
	int	n;
	Base	*b;

	srand(time(0));
	n = rand() % 3;
	switch (n)
	{
	case 0:
		b = new BaseA();
		break;
	case 1:
		b = new BaseB();
		break;
	case 2:
		b = new BaseC();
		break;
	}
	return (b);
}

void identify(Base* p) {
	if (dynamic_cast<BaseA*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<BaseB* >(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<BaseC*>(p))
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try {
		BaseA a = dynamic_cast<BaseA&>(p);
		std::cout << "Type: A" << std::endl;
		static_cast<void>(a);
	}
	catch (const std::exception& e1) {
	}
	try {
		BaseB b = dynamic_cast<BaseB&>(p);
		std::cout << "Type: B" << std::endl;
		static_cast<void>(b);
	}
	catch (const std::exception& e2) {
	}
	try {
		BaseC c = dynamic_cast<BaseC&>(p);
		std::cout << "Type: C" << std::endl;
		static_cast<void>(c);
	}
	catch (const std::exception& e3) {
	}
}