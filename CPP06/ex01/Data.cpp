#include "Data.hpp"

Data::Data() {
}

Data::Data(std::string data1, int data2) : _data1(data1), _data2(data2) {
}

Data::Data(Data &rhs) {
	*this = rhs;
}

Data::~Data() {
}

std::string const	&Data::getData1() const {
	return (this->_data1);
}

int const	&Data::getData2() const {
	return (this->_data2);
}

Data	&Data::operator=(Data const &rhs) {
	this->_data1 = rhs.getData1();
	this->_data2 = rhs.getData2();
	return(*this);
}

std::ostream	&operator<<(std::ostream &lhs, Data &rhs) {
	lhs << rhs.getData1() << ", " << rhs.getData2();
	return(lhs);
}

uintptr_t 	serialize(Data* ptr) {
	uintptr_t	_ptr;

	_ptr = reinterpret_cast<uintptr_t>(ptr);
	return (_ptr);
}

Data* 	deserialize(uintptr_t raw) {
	Data	*data;

	data = reinterpret_cast<Data*>(raw);
	return (data);
}