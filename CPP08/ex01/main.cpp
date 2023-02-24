#include "Span.hpp"

int	main(void)
{

	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

	}
	std::cout << "\n\n" << std::endl;
	{
		try
		{
			Span sp = Span();
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}

	}
		std::cout << "\n\n" << std::endl;
	{
		Span	s(10000);
		std::vector<int> vec;
		
		for (int i = 0; i < 1000; i++)
		{
			vec.push_back(i);
		}
		
		try
		{
			s.addManyNumbers(vec.begin(), vec.end());
			std::cout << s.shortestSpan() << std::endl;
			std::cout << s.longestSpan() << std::endl;
		}
		catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}

	}
	
	return (0);
}
