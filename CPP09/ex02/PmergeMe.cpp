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

void	PmergeMe::create_containers(int argc, char *argv[])
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

void	PmergeMe::sort_containers()
{
	sort(_lst);
	sort(_dqe);

	std::list<int>::iterator	it1;
	std::cout << "sorted _lst: " << " ";
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

template<typename T>
void	PmergeMe::sort(T& lst)
{
	if (lst.size() <= 1)
		return ;
	
	T	left;
	T	right;

	size_t	sz = lst.size();
	for (size_t	i = 0; i < sz; i++)
	{
		if (i < lst.size() / 2)
			left.push_back(lst.front());
		else
			right.push_back(lst.front());
		lst.pop_front();
	}

	sort(left);
	sort(right);

	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			lst.push_back(left.front());
			left.pop_front();
		}
		else
		{
			lst.push_back(right.front());
			right.pop_front();
		}
	}
	while (!left.empty())
	{
		lst.push_back(left.front());
		left.pop_front();
	}

	while (!right.empty())
	{
		lst.push_back(right.front());
		right.pop_front();
	}

}
