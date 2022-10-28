#include "Span.hpp"

int	main(void) {

	Span	s(4);

	try {
			s.addNumber(2);
			s.addNumber(27);
			s.addNumber(12);
			s.addNumber(30);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}



	std::cout << s << std::endl;

	s.longestSpan();
	s.shortestSpan();
	return (0);
}