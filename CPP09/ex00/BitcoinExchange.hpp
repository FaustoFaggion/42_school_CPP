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
		float							_value;
		bool							_leapyear;
		int								_year;
		int								_month;
		int								_day;

	public:
		BitcoinExchange();
		BitcoinExchange(std::string txt_file);
		BitcoinExchange(const BitcoinExchange &rhs);
		~BitcoinExchange();

		BitcoinExchange	&operator=(BitcoinExchange const &rhs);

		std::map<std::string, float>	getCsv() const;
		
		void			exchange_data(std::string file);

	private:
		void			set_csv_data();
		
		int				validate_line(std::string line);
		int				validate_char(std::string line, std::string tmp, std::string c);
		void			exchange(std::string line);
		
		int				validate_year(std::string line);
		int				validate_month(std::string line);
		int				validate_day(std::string line);
		int				validate_value(std::string line);
};

#endif
