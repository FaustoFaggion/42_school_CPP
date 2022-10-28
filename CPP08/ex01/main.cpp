#include "Span.hpp"

int	main(void) {

	Span	s(4);

	try {
		for (long unsigned int i = 0; i < s._vec.size(); i++) {
			std::cout << "looping " << i << std::endl;
			s.addNumber(i);
		}
		for (std::vector<int>::iterator it = s._vec.begin(); it != s._vec.end(); it++) {
			std::cout << *it << std::endl;
		}
		std::cout << "OOOOOOO" << std::endl;
		for (long unsigned int i = 0; i < s.getVec().size(); i++) {
			s.getVec()[i] = i;
		}
		for (std::vector<int>::iterator it = s.getVec().begin(); it != s.getVec().end(); it++) {
			std::cout << *it << std::endl;
		}
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	return (0);
}