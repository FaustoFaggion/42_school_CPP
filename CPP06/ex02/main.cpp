#include "Base.hpp"
#include "BaseA.hpp"
#include "BaseB.hpp"
#include "BaseC.hpp"

int	main(void) {

	Base	*base;

	std::cout << "\nTest 1\n";
	
	base = generate();
	identify(base);
	identify(*base);
	delete base;
	
	std::cout << "\nTest 2\n";

	BaseA	*baseA = new BaseA();
	identify(baseA);
	identify(*baseA);
	delete baseA;

	std::cout << "\nTest 3\n";

	BaseB	*baseB = new BaseB();
	identify(baseB);
	identify(*baseB);
	delete baseB;

	std::cout << "\nTest 4\n";

	BaseC	*baseC = new BaseC();
	identify(baseC);
	identify(*baseC);
	delete baseC;

}