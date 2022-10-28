#include "MutantStack.hpp"

int main(void) {

	MutantStack<int>	m;
	MutantStack<int>	a;

	std::cout << "empty m: " << m.empty() << std::endl;
	std::cout << "size m: " << m.size() << std::endl;
	std::cout << "push m" << std::endl;
	m.push(2);
	std::cout << "top m: " << m.top() << std::endl;
	std::cout << "empty m: " << m.empty() << std::endl;
	std::cout << "size m: " << m.size() << std::endl;
	std::cout << "pop m" << std::endl;
	m.pop();
	std::cout << "size m: " << m.size() << std::endl;
	std::cout << "empty m: " << m.empty() << std::endl;
	m.push(2);
	std::cout << "top m: " << m.top() << std::endl;
	std::cout << "top a: " << m.top() << std::endl;
	m.push(10);
	m.push(20);
	m.push(30);
	m.push(40);
	for (std::deque<int>::reverse_iterator it = m.rbegin(); it != m.rend(); it++) {
		std::cout << *it << std::endl;
	}
	return (0);
}