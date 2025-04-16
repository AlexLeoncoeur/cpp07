#pragma once

template <typename T>
class Array
{
private:

	T	_array[];

public:

	Array(void);
	Array(const unsigned int n);
	Array(Array &toCopy);
	~Array(void);

	Array &operator=(Array &rhs);

};
