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
void	PmergeMe::sort(T& c)
{
	if (c.size() <= 1)
		return ;
	
	T	left;
	T	right;

	size_t	sz = c.size();
	for (size_t	i = 0; i < sz; i++)
	{
		if (i < c.size() / 2)
			left.push_back(c.front());
		else
			right.push_back(c.front());
		c.pop_front();
	}

	sort(left);
	sort(right);

	merge(left, right, c);
}

template<typename T>
void	PmergeMe::merge(T &left, T& right, T& c)
{
	while (!left.empty() && !right.empty())
	{
		if (left.front() <= right.front())
		{
			c.push_back(left.front());
			left.pop_front();
		}
		else
		{
			c.push_back(right.front());
			right.pop_front();
		}
	}
	while (!left.empty())
	{
		c.push_back(left.front());
		left.pop_front();
	}
	while (!right.empty())
	{
		c.push_back(right.front());
		right.pop_front();
	}
}
