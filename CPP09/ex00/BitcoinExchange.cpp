#include "BitcoinExchange.hpp"
#include <iomanip>

BitcoinExchange::BitcoinExchange() 
{
	set_csv_data();
}

BitcoinExchange::BitcoinExchange(std::string file)
{
	set_csv_data();
	exchange_data(file);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs)
{
	*this = rhs;
}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &rhs)
{
	this->csv = rhs.getCsv();
	return (*this);
}

BitcoinExchange::~BitcoinExchange() { }

std::map<std::string, float>	BitcoinExchange::getCsv() const
{
	return (csv);
}

void	BitcoinExchange::set_csv_data(void)
{
	std::fstream	csv_file;
	std::string		key;
	std::string		rate;
	float			value;
	
	csv_file.open ("data.csv", std::fstream::in);
	std::getline(csv_file, key);
	while (1)
	{
		std::getline(csv_file, key,',');
		if (csv_file.eof())
			break ;
		std::getline(csv_file, rate, '\n');
		value = std::strtof(rate.c_str(), NULL);
		this->csv[key] = value;
	}
	// for (std::map<std::string, float>::iterator it = csv.begin(); it != csv.end(); it++)
	// 	std::cout << (*it).first << " : " << (*it).second << std::endl;
}

void	BitcoinExchange::exchange_data(std::string file)
{
	std::fstream	txt_file;
	std::string		line;

	txt_file.open (file.c_str(), std::fstream::in);
	std::getline(txt_file, line, '\n');

	while (1)
	{
		if (txt_file.eof())
			break ;
		std::getline(txt_file, line,'\n');
		if (validate_line(line) == 0)
		{
			exchange(line);
		}
	}
}

int	BitcoinExchange::validate_line(std::string line)
{
	std::string	tmp;

	/*VALIDATE YEAR*/
	if (validate_year(line) == 1)
		return (1);

	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(4, 1);
	if (validate_char(line, tmp, "-") == 1)
		return (1);
	
	/*VALIDATE MONTH*/
	if (validate_month(line) == 1)
		return (1);
	
	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(7, 1);
	if (validate_char(line, tmp, "-") == 1)
		return (1);
	
	/*VALIDATE DAY*/
	if (validate_day(line) == 1)
		return (1);

	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(10, 1);
	if (validate_char(line, tmp, " ") == 1)
		return (1);
	tmp = line.substr(11, 1);
	if (validate_char(line, tmp, "|") == 1)
		return (1);
	tmp = line.substr(12, 1);
	if (validate_char(line, tmp, " ") == 1)
		return (1);

	/*VALIDATE VALUE*/
	if (validate_value(line) == 1)
		return (1);
	
	
	return (0);
}

int	BitcoinExchange::validate_year(std::string line)
{
	std::string	tmp;

	tmp = line.substr(0, 4);
	_year = atoi(tmp.c_str());

	if ((_year % 4 == 0 && _year % 100 != 0) || (_year % 400 == 0))
		_leapyear = true;
	else
		_leapyear = false;
	
	if (_year < 1 || _year > 9999)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	return (0);
}

int	BitcoinExchange::validate_month(std::string line)
{
	std::string	tmp;

	tmp = line.substr(5, 2);
	_month = atoi(tmp.c_str());
	if (_month < 1 || _month > 12)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	return (0);
}

int	BitcoinExchange::validate_day(std::string line)
{
	std::string	tmp;
	int	maxDay;

	tmp = line.substr(8, 2);
	_day = atoi(tmp.c_str());

	if (_month == 4 || _month == 6 || _month == 9 || _month == 11)
		maxDay = 30;
	else if (_month == 2 && _leapyear == true)
		maxDay = 29;
	else if (_month == 2 && _leapyear == false)
		maxDay = 28;
	else
		maxDay = 31;
	if (_day < 1 || _day > maxDay)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	return (0);
}

int	BitcoinExchange::validate_value(std::string line)
{
	std::string	tmp;

	tmp = line.substr(13, (line.length() - 13));

	size_t i = 0;
	while (i < tmp.length())
	{
		if (!isdigit(tmp[i]))
		{
			std::cout << "Error: bad input => " << line << std::endl;
			return (1);
		}
		i++;
	}

	_value = strtof(tmp.c_str(), NULL);
	if (_value < 0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return (1);
	}
	if (_value > 1000)
	{
		std::cout << "Error: too large number" << std::endl;
		return (1);
	}
	return (0);
}

int	BitcoinExchange::validate_char(std::string line, std::string tmp, std::string c)
{
	if (tmp != c)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	return (0);
}

void	BitcoinExchange::exchange(std::string line)
{
	std::string	date;
	float		result;

	date = line.substr(0, 10);
	std::map<std::string, float>::iterator	it;
	it = csv.upper_bound(date);
	it--;
	result = _value * (*it).second;
	line = line.replace(11, 1, "=>");
	std::cout << line << " = " << result << std::endl;
	(void)result;
}
