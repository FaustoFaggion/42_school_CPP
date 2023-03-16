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
	this->stk = rhs.getStk();
	return (*this);
}

std::stack<int>	RPN::getStk() const
{
	return (this->stk);
}

int	RPN::chk_str(std::string expression)
{
	size_t			i;

	if (expression.length() == 0)
	{
		std::cout << "Invalid expression" << std::endl;
		return (1);
	}
	i = 0;
	while (i < expression.length())
	{
		if (!strchr("+-*/ ", expression.at(i)) && !std::isdigit(expression.at(i)))
		{
			std::cout << "Invalid expression" << std::endl;
			return (1);
		}
		if (std::isdigit(expression.at(i)))
		{
			if ((i + 1) < expression.length() && std::isdigit(expression.at(i + 1)))
			{
				std::cout << "Invalid expression" << std::endl;
				return (1);
			}
		}
		i++;
	}
	this->expression = expression;
	return (0);
}

int	RPN::solve()
{
	size_t	i;
	int x;
	int y;

	i = 0;
	x = 0;
	while (i < expression.length())
	{
		if (expression.at(i) == ' ')
			i++;
		else if(std::isdigit(expression.at(i)))
		{
			stk.push(expression.at(i) - '0');
			i++;
		}
		else if (strchr("+-*/", expression.at(i)))
		{
			if (stk.size() < 2)
			{
				std::cout << "Invalid expression at " << expression.at(i) << std::endl;
				return (1);
			}
			y = stk.top();
			stk.pop();
			x = stk.top();
			stk.pop();
			if (expression.at(i) == '+')
				x = x + y;
			else if (expression.at(i) == '-')
				x = x - y;
			else if (expression.at(i) == '*')
				x = x * y;
			else if (expression.at(i) == '/')
			{
				if (y == 0)
				{
					std::cout << "Invalid expression" << std::endl;
					return (1);
				}
				x = x / y;
			}
			stk.push(x);
			i++;
		}
	}
	if (stk.size() != 1)
	{
		std::cout << "Invalid expression" << std::endl;
		return (1);
	}
	std::cout << x << "\n";
	return (0);
}
