#include "MutantStack.hpp"

int main(void) {

	{
		MutantStack<int>
		mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
		std::cout << *it << std::endl;
		++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << "\n=========================================\n\n";

	{

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

	}
	return (0);
}
