#pragma once

# include <iostream>

template <typename T>
class Array
{
private:

	T				*_array;
	unsigned int	_n;

public:

	Array();
	Array(unsigned int n);
	Array(const Array &toCopy);
	~Array();

	Array &operator=(const Array &rhs);
	T &operator[](int i) const;

	unsigned int	size() const;

};

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &obj);

#include "Array.tpp"