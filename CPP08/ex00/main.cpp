#include "easyfind.hpp"

int main(void) {

	std::vector<int> vec;
	std::list<int> lis;
	std::queue<int> que;
	vec.reserve(6);

	for (long unsigned int i = 0; i < 10; i++) {
		vec.push_back(i);
	}

	for (long unsigned int i = 0; i < 10; i++) {
		lis.push_front(i + 10);
	}

	for (long unsigned int i = 0; i < 10; i++) {
		lis.push_front(i + 100);
	}

	std::cout << "VEC\n" << std::endl;
	try {
		easyfind(vec, 13);
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "LIST\n" << std::endl;
	easyfind(lis, 12);
	std::cout << "QUEUE\n" << std::endl;
	easyfind(lis, 102);
}