#include "RPN.hpp"

RPN::RPN(void) { }

RPN::RPN(std::string expression)
{
	_expression = expression;
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
	_expression = expression;
	return (0);
}

int	RPN::solve(std::string expression)
{

	if (chk_str(expression) == 1)
		return (1);

	size_t	i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	while (i < _expression.length())
	{
		if (_expression.at(i) == ' ')
			i++;
		else if(std::isdigit(_expression.at(i)))
		{
			stk.push(_expression.at(i) - '0');
			i++;
		}
		else if (strchr("+-*/", _expression.at(i)))
		{
			if (calculate(_expression.at(i), x, y) == 1)
				return (1);
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

int	RPN::calculate(char c, int &x, int &y)
{
	if (stk.size() < 2)
	{
		std::cout << "Invalid expression at " << c << std::endl;
		return (1);
	}
	y = stk.top();
	stk.pop();
	x = stk.top();
	stk.pop();
	if (c == '+')
		x = x + y;
	else if (c == '-')
		x = x - y;
	else if (c == '*')
		x = x * y;
	else if (c == '/')
	{
		if (y == 0)
		{
			std::cout << "Invalid expression" << std::endl;
			return (1);
		}
		x = x / y;
	}
	stk.push(x);
	return (0);
}