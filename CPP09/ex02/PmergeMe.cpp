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

std::list<int> const	&PmergeMe::getLst() const
{
	return (_lst);
}

std::deque<int> const	&PmergeMe::getDqe() const
{
	return (_dqe);
}

timeval	const			&PmergeMe::getT_list() const
{
	return (t_lst);
}

timeval	const			&PmergeMe::getT_dqe() const
{
	return (t_dqe);
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
}

void	PmergeMe::sort_containers()
{
	timeval	start;

	gettimeofday(&start, NULL);
	sort(_lst);
	gettimeofday(&t_lst, NULL);
	timersub(&t_lst, &start, &t_lst);

	gettimeofday(&start, NULL);
	sort(_dqe);
	gettimeofday(&t_dqe, NULL);
	timersub(&t_dqe, &start, &t_dqe);

	// std::cout << "After: ";
	// std::list<int>::iterator it;
	// for (it = _lst.begin(); it != _lst.end(); it++)
	// 	std::cout << *it << " ";
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
		if (i < (sz / 2))
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
