#include "BitcoinExchange.hpp"
#include <iomanip>

BitcoinExchange::BitcoinExchange(std::string file)
{
	get_csv_data();
	get_txt_data(file);

}

void	BitcoinExchange::get_csv_data(void)
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

void	BitcoinExchange::get_txt_data(std::string file)
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
	int			day;
	int			month;
	int			year;
	bool		leapyear;

	
	/*VALIDATE YEAR*/
	tmp = line.substr(0, 4);
	year = atoi(tmp.c_str());

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
		leapyear = true;
	else
		leapyear = false;
	
	if (year < 1 || year > 9999)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}

	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(4, 1);
	if (validate_char(line, tmp, "-") == 1)
		return (1);
	
	/*VALIDATE MONTH*/
	tmp = line.substr(5, 2);
	month = atoi(tmp.c_str());
	if (month < 1 || month > 12)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	
	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(7, 1);
	if (validate_char(line, tmp, "-") == 1)
		return (1);
	
	/*VALIDATE DAY*/
	tmp = line.substr(8, 2);
	day = atoi(tmp.c_str());

	int	maxDay;
	if (month == 4 || month == 6 || month == 9 || month == 11)
		maxDay = 30;
	else if (month == 2 && leapyear == true)
		maxDay = 29;
	else if (month == 2 && leapyear == false)
		maxDay = 28;
	else
		maxDay = 31;
	if (day < 1 || day > maxDay)
	{
		std::cout << "Error: bad input => " << line << std::endl;
		return (1);
	}
	
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
	tmp = line.substr(13, (line.length() - 13));
	this->value = strtof(tmp.c_str(), NULL);
	if (this->value < 0)
	{
		std::cout << "Error: not a positive number" << std::endl;
		return (1);
	}
	if (this->value > 1000)
	{
		std::cout << "Error: too large number" << std::endl;
		return (1);
	}

	return (0);
	// std::cout << year << " : " << month << " : " << day << " : " << maxDay << std::endl;
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
	result = value * (*it).second;
	line = line.replace(11, 1, "=>");
	std::cout << line << " = " << result << std::endl;

}
