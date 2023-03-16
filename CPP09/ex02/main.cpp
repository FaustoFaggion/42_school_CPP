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
		if (std::atoi(argv[i]) <= 0)
		{
			std::cout << i << "  " << argv[i] << "invalid number" << std::endl;
			return (1);
		}
	}
	return (0);
}

int	main (int argc, char *argv[])
{
	if (chk_arg(argc, argv) == 1)
		return (1);

	PmergeMe	pmm(argc, argv);

	std::cout << "\n_______________\n\n";

	PmergeMe	pcc;
	pcc.create_containers(argc, argv);
}