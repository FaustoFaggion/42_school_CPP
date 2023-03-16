#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <deque>
#include <iostream>
#include <string>

class PmergeMe {

	private:
		std::list<int>	_lst;
		std::deque<int>	_dqe;
	
	public:
		PmergeMe();
		PmergeMe(std::list<int> lst, std::deque<int> dqe);
		PmergeMe(const PmergeMe &rhs);
		~PmergeMe();

		PmergeMe&	operator=(const PmergeMe &rhs);

		std::list<int>	getLst() const;
		std::deque<int>	getDqe() const;
};

#endif