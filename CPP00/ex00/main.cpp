#include <iostream>

int	main(int argc, char *argv[]){
	if (argc == 1)
		std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++) {
			const std::string str = argv[i];
			for (size_t i = 0; i < str.length(); i++)
				std::cout << static_cast<char>(std::toupper(str.at(i)));
		}
		std::cout << std::endl;
	}
	 
}