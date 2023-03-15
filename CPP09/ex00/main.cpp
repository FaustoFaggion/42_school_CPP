#include <algorithm>
#include "BitcoinExchange.hpp"

int	chk_arg(int argc, char *argv[])
{
	/*CHK TERMINAL ARGUMENTS*/
	if (argc != 2)
	{
		std::cout << "Wrong number of arguments!\n";
		return (1);
	}

	/*CHK CSV FILE*/
	std::fstream	csv_file;
	csv_file.open ("data.csv", std::fstream::in);
	if (csv_file.fail())
	{
		std::cout << "file fail to open!!" << std::endl;
		return (1);
	}
	csv_file.close();

	/*CHK TXT FILE*/
	std::fstream	file;
	file.open (argv[1], std::fstream::in);
	if (file.fail())
	{
		std::cout << "file fail to open!!" << std::endl;
		return (1);
	}
	file.close();

	return (0);
}

int	main(int argc, char *argv[])
{

	if (chk_arg(argc, argv))
		return (1);

	BitcoinExchange	bc(argv[1]);
	
	return (0);
}

