#include "../include/iter.hpp"
#include <string>
#include <iostream>
#include <cstring>

int	main(int argc, char** argv)
{
	char str[] = "Pipo";
	int nb[] = {1, 2, 3, 4, 5, 6};

	::iter(nb, 6, ::printInt);
	::iter(nb, 6, ::add<int>);
	::iter(nb, 6, ::printInt);
	::iter(nb, 6, ::subtract<int>);

	::iter(str, strlen(str), ::printT<char>);
	::iter(str, strlen(str), ::add<char>);
	::iter(str, strlen(str), ::subtract<char>);
	
	return 0;
	
}