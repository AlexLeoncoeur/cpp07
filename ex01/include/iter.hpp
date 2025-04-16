#pragma once

#include <iostream>

template <typename T, typename F>
void	iter(T *array, size_t length, F function)
{
	for (int i = 0; i < length; i++)
		function(array[i]);
}

template <typename T>
void	add(T &nb)
{
	nb++;
	std::cout << "add: " << nb << std::endl;
}

template <typename T>
void	subtract(T &nb)
{
	nb--;
	std::cout << "subtract: " << nb << std::endl;
}

template <typename T>
void	printT(T &obj)
{
	std::cout << "printT: " << obj << std::endl;
}

void	printInt(int &i)
{
	std::cout << "printInt: " << i << std::endl;
}