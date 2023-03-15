#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP


#include <map>
#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>
#include <stdlib.h>
#include <exception>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	csv;
		float							value;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string txt_file);
		BitcoinExchange(const BitcoinExchange &rhs);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &rhs);

		std::map<std::string, float>	getCsv() const;
		
		void			get_csv_data();
		void			get_txt_data(std::string file);
		int				validate_line(std::string line);
		int				validate_char(std::string line, std::string tmp, std::string c);
		void			exchange(std::string line);
};

#endif
