#include <map>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <exception>

class BitcoinExchange
{
	public:
		class BcException : public std::exception
		{
			private:
				std::string msg;
			public:
				BcException(const std::string& msg) : msg(msg) { }
				virtual ~BcException() throw() { }

				virtual const char* what() const throw()
				{
					return msg.c_str();
				}
		};
	private:
		std::map<std::string, float>	csv;
		float							value;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string txt_file);

		void	get_csv_data();
		void	get_txt_data(std::string file);
		int		validate_line(std::string line);
		int		validate_char(std::string line, std::string tmp, std::string c);
		void	exchange(std::string line);


};