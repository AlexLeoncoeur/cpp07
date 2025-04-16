#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _n(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(new T[n]()), _n(n)
{
	std::cout << "Param constructor called" << std::endl;
	return ;
}

template <typename T>
Array<T>::Array(const Array<T> &toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "Default destructor called" << std::endl;
	if (this->_array != NULL)
		delete[] this->_array;
	return ;
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &rhs)
{
	if (this != &rhs)
	{
		this->~Array();
		this->_n = rhs._n;
		this->_array = new T[rhs._n];
		for (int i = 0; i < rhs._n; i++)
			this->_array[i] = rhs._array[i];
	}
	return (*this);
}

template <typename T>
T	&Array<T>::operator[](int i) const
{
	if (i >= this->_n)
		throw std::out_of_range("Index is out of range\n");
	return (this->_array[i]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_n);
}

template <typename T>
std::ostream &operator<<(std::ostream &out, const Array<T> &obj)
{
	for (int i = 0; i < obj.size(); i++)
		out << "array[" << i << "]: " << obj[i] << std::endl;
	out << "array.size: " << obj.size() << std::endl;
	return (out);
}