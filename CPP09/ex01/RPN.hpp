#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string.h>
#include <iostream>
#include <cstring>
#include <stdlib.h>

class RPN
{
	private:
		class SpanException : public std::exception
	{
		private:
			std::string msg;
		public:	
			SpanException(const std::string& msg) : msg(msg){ }
			virtual ~SpanException() throw();
			virtual const char* what() const throw()
			{
				return msg.c_str();
			};
	};

	private:
		std::stack<int>			stk;
		std::string				expression;

	public:
		RPN();
		RPN(std::string expression);
		RPN(const RPN &rhs);
		~RPN();

		RPN&	operator=(const RPN &rhs);

		std::stack<int>	getStk() const;

		int						chk_str(std::string expression);
		int					solve();
	
};

#endif