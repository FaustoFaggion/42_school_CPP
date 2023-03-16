#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
{

}

PmergeMe::PmergeMe(int argc, char *argv[])
{
	create_containers(argc, argv);
}

PmergeMe::PmergeMe(const PmergeMe &rhs)
{
	*this = rhs;
}

PmergeMe::~PmergeMe()
{

}

PmergeMe&	PmergeMe::operator=(const PmergeMe &rhs)
{
	_lst = rhs.getLst();
	_dqe = rhs.getDqe();
	return (*this);
}

std::list<int>	PmergeMe::getLst() const
{
	return (_lst);
}

std::deque<int>	PmergeMe::getDqe() const
{
	return (_dqe);
}

void			PmergeMe::create_containers(int argc, char *argv[])
{
	int	n;

	for (int i = 1; i < argc; i++)
	{
		n = std::atoi(argv[i]);
		_lst.push_back(n);
		_dqe.push_back(n);
	}

	std::list<int>::iterator	it1;
	std::cout << "_lst: " << " ";
	for (it1 = _lst.begin(); it1 != _lst.end(); it1++)
	{
		std::cout << *it1 << " ";
	}

	std::deque<int>::iterator	it2;
	std::cout << "\n_dqe: " << " ";
	for (it2 = _dqe.begin(); it2 != _dqe.end(); it2++)
	{
		std::cout << *it2 << " ";
	}
	std::cout << "\n";
}
