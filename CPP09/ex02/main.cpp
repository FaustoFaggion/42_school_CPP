#include "PmergeMe.hpp"

int	chk_arg(int argc, char *argv[])
{
		if (argc == 1)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	for (int i = 1; i < argc; i++)
	{
		for (size_t j = 0; j < strlen(argv[i]); j++)
		{
			if (!isdigit(argv[i][j]))
			{
				std::cout << "invalid number" << std::endl;
				return (1);
			}
		}
	}
	return (0);
}

int	main (int argc, char *argv[])
{
	if (chk_arg(argc, argv) == 1)
		return (1);

	std::cout << "Before: ";
	for (int i = 1; i < argc; i++)
		std::cout << argv[i] << " ";
	std::cout << std::endl;

	PmergeMe	pmm(argc, argv);

	pmm.sort_containers();

	std::cout << "After: ";
	std::list<int>::const_iterator it;
	for (it = pmm.getLst().begin(); it != pmm.getLst().end(); it++)
		std::cout << *it << " ";

	std::cout << std::endl;
	std::cout << "Time to process a range of " << pmm.getLst().size()
		<< " elements with std::list : " << pmm.getT_list().tv_sec + pmm.getT_list().tv_usec << " us";

	std::cout << std::endl;
	std::cout << "Time to process a range of " << pmm.getDqe().size()
		<< " elements with std::deque : " << pmm.getT_dqe().tv_sec + pmm.getT_dqe().tv_usec << " us";

	std::cout << std::endl;
}