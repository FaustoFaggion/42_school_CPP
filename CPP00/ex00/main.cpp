#include <iostream>

int	main(int argc, char *argv[]){
	if (argc != 2)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else
	{
		const std::string str = argv[1];
		for (size_t i = 0; i < str.length(); i++)
			std::cout << static_cast<char>(std::toupper(str.at(i)));
		std::cout << std::endl;
	}
	 
}