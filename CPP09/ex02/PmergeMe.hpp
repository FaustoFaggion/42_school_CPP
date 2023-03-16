#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <deque>
#include <iostream>
#include <string>
#include <stdlib.h>

class PmergeMe {

	private:
		std::list<int>	_lst;
		std::deque<int>	_dqe;
	
	public:
		PmergeMe();
		PmergeMe(int argc, char *argv[]);
		PmergeMe(const PmergeMe &rhs);
		~PmergeMe();

		PmergeMe&	operator=(const PmergeMe &rhs);

		std::list<int>	getLst() const;
		std::deque<int>	getDqe() const;

		void			create_containers(int argc, char *argv[]);

		void			sort_containers();
		
		template<typename T>
		void			sort(T &lst);
		template<typename T>
		void			merge(T &left, T& right, T& c);
};

#endif