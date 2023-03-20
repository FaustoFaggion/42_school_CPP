#include "RPN.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments\n" << std::endl;
		return (1);
	}
	std::string	str(argv[1]);
	RPN	e(str);
	
	if (e.solve(str) == 1)
		return (1);

	return (0);
}
