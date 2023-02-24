#include "MutantStack.hpp"

int main(void) {

	MutantStack<int>	m;
	MutantStack<int>	a;

	std::cout << "empty m: " << m.empty() << std::endl;
	std::cout << "size m: " << m.size() << std::endl;
	std::cout << "push m: " << std::endl;
	
	std::cout << "\n---------Push 2 -------------\n";
	m.push(2);
	std::cout << "top m: " << m.top() << std::endl;
	std::cout << "empty m: " << m.empty() << std::endl;
	std::cout << "size m: " << m.size() << std::endl;
	std::cout << "pop m" << std::endl;

	std::cout << "\n---------Pop -------------\n";
	m.pop();
	std::cout << "size m: " << m.size() << std::endl;
	std::cout << "empty m: " << m.empty() << std::endl;
	
	std::cout << "\n---------Push 2-------------\n";
	m.push(2);
	std::cout << "top m: " << m.top() << std::endl;
	std::cout << "top a: " << m.top() << std::endl;

	std::cout << "\n---------Push more-------------\n";
	m.push(10);
	m.push(20);
	m.push(30);
	m.push(40);

	std::cout << "\n---------Reverse Iterator -------------\n";
	for (MutantStack<int>::reverse_iterator it = m.rbegin(); it != m.rend(); it++) {
		std::cout << *it << std::endl;
	}

	std::cout << "\n---------Iterator -------------\n";
	for (MutantStack<int>::iterator it2 = m.begin(); it2 != m.end(); it2++) {
		std::cout << *it2 << std::endl;
	}
	return (0);
}
