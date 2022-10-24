#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
#include <string.h>

class Data {
private:
	std::string	_data1;
	int			_data2;
public:
	Data();
	Data(std::string data1, int data2);
	Data(Data &rhs);
	~Data();

	std::string const	&getData1() const;
	int const			&getData2() const;

	Data				&operator=(Data const &rhs);
};

std::ostream	&operator<<(std::ostream &lhs, Data &rhs);

uintptr_t 				serialize(Data* ptr);
Data* 					deserialize(uintptr_t raw);

#endif