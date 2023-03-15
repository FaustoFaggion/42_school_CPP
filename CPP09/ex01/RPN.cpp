#include "RPN.hpp"

RPN::RPN(void) { }

RPN::RPN(std::string expression)
{
	this->expression = expression;
}

RPN::RPN(const RPN &rhs)
{
	*this = rhs;
}

RPN::~RPN(){ }

RPN&	RPN::operator=(const RPN &rhs)
{
	this->exp = rhs.getExp();
	return (*this);
}

std::stack<std::string>	RPN::getExp() const
{
	return (this->exp);
}

int	RPN::create_stack(std::string expression)
{
	size_t			i;
	std::string		s;

	if (expression.length() == 0)
	{
		std::cout << "Invalid expression 0" << std::endl;
		return (1);
	}
	i = expression.length() - 1;

	while (i > 1)
	{
		if (expression.at(i) != '+' && expression.at(i) != '-'
			&& expression.at(i) != '/' && expression.at(i) != '*')
		{
			std::cout << "Invalid expression 8" << std::endl;
			return (1);
		}
		this->exp.push(expression.substr(i, 1));
		if (--i == 0)
		{
			std::cout << "Invalid expression 3" << std::endl;
			return (1);
		}
		if (expression.at(i) != ' ')
		{
			std::cout << "Invalid expression 2" << std::endl;
			return (1);
		}
		if (--i == 0)
		{
			std::cout << "Invalid expression 3" << std::endl;
			return (1);
		}
		if (!std::isdigit(expression.at(i)))
		{
			std::cout << "Invalid expression 4" << std::endl;
			return (1);
		}
		this->exp.push(expression.substr(i, 1));
		if (--i == 0)
		{
			std::cout << "Invalid expression 5" << std::endl;
			return (1);
		}
		if (expression.at(i) != ' ')
		{
			std::cout << "Invalid expression 6" << std::endl;
			return (1);
		}
		i--;
	}
	if (!std::isdigit(expression.at(i)))
	{
		std::cout << "Invalid expression 4" << std::endl;
		return (1);
	}
	this->exp.push(expression.substr(i, 1));

	while (!exp.empty())
	{
		std::cout << exp.top() << " ";
		exp.pop();
	}
	return (0);
}

// 8 + 9 * 2 - 4

// 8 9 + 2 * 4 -