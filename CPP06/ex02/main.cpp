#include "Base.hpp"
#include "BaseA.hpp"
#include "BaseB.hpp"
#include "BaseC.hpp"

int	main(void) {

	Base	*base;

	base = generate();
	identify(base);
	identify(*base);
	delete base;
	
	BaseA	*baseA = new BaseA();
	identify(baseA);
	identify(*baseA);
	delete baseA;

	BaseB	*baseB = new BaseB();
	identify(baseB);
	identify(*baseB);
	delete baseB;

	BaseC	*baseC = new BaseC();
	identify(baseC);
	identify(*baseC);
	delete baseC;

}