#include "Span.hpp"

int	main(void) {

	Span	s(10000);
	struct timeval t;
	
	gettimeofday(&t, NULL);
	srand(t.tv_usec);

	try {
		for (unsigned int i = 0; i < s.getMaxSize(); i++) {
			s.addNumber(abs(rand()));
		}
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << s << std::endl;

	s.longestSpan();
	s.shortestSpan();
	return (0);
}