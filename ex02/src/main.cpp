#include "../include/Array.hpp"
#include <string>
#include <iostream>

class Pipo
{
	public:
		std::string name;
};

int	main(void)
{
	Array<int>	empty;
	Array<int>	notEmpty(4);
	int			test[] = {1, 3, 6, -10};

	for (int i = 0; i < notEmpty.size(); i++)
		notEmpty[i] = test[i];
	std::cout	<< notEmpty;

	std::cout	<< empty;
	empty = notEmpty;
	std::cout	<< empty;

	try
	{
		std::cout << notEmpty[-3];
	}
	catch (std::exception &e)
	{
		std::cerr << e.what(); 
	}

	Array<Pipo> pipoEquipo(5);
	for (int i = 0; i < pipoEquipo.size(); i++)
	{
		pipoEquipo[i].name = "pipo" + std::to_string(i);
	}
	for (int i = 0; i < pipoEquipo.size(); i++)
		std::cout << pipoEquipo[i].name << std::endl;

	return 0;
}