#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	/*CHK CSV FILE*/
	std::fstream	csv_file;
	csv_file.open ("data.csv", std::fstream::in);
	if (csv_file.fail())
		throw BitcoinExchange::BcException("File fail to open\n");
	csv_file.close();

	get_csv_data();
	

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

void	BitcoinExchange::validate_line(std::string line)
{
	std::string	tmp;
	int			day;
	int			month;
	int			year;
	bool		leapyear;

	std::cout << line << std::endl;
	/*VALIDATE YEAR*/
	tmp = line.substr(0, 4);
	year = atoi(tmp.c_str());

	if ((year %4 == 0 && year % 100 != 0) || (year % 400 == 0))
		leapyear = true;
	else
		leapyear = false;
	
	if (year < 1 || year > 9999)
	{
		std::cout << "Error: not a valid year\n" << std::endl;
		return ;
	}
	
	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(5, 1);
	if (tmp != " ")
	{
		std::cout << "Error: not a valid date format\n" << std::endl;
		return ;
	}
	tmp = line.substr(6, 1);
	if (tmp != "-")
	{
		std::cout << "Error: not a valid date format\n" << std::endl;
		return ;
	}
	/*VALIDATE MONTH*/
	tmp = line.substr(7, 2);
	month = atoi(tmp.c_str());
	if (month < 1 || month > 12)
	{
		std::cout << "Error: not a valid month" << std::endl;
		return ;
	}
	/*VALIDATE DATE FORMAT " -"*/
	tmp = line.substr(9, 1);
	if (tmp != " ")
	{
		std::cout << "Error: not a valid date format\n" << std::endl;
		return ;
	}
	tmp = line.substr(10, 1);
	if (tmp != "-")
	{
		std::cout << "Error: not a valid date format\n" << std::endl;
		return ;
	}
	/*VALIDATE DAY*/
	tmp = line.substr(11, 2);
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
		std::cout << "Error: not a valid day" << std::endl;
		return ;
	}
	
	
	std::cout << year << " : " << month << " : " << day << " : " << maxDay << std::endl;
}