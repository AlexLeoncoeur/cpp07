#pragma once

template <typename T>
void	swap(T &param1, T &param2)
{
	T swap;

	swap = param1;
	param1 = param2;
	param2 = swap;
}

template <typename T>
T	min(T param1, T param2)
{
	if (param1 > param2)
		return (param2);
	return (param1);
}

template <typename T>
T	max(T param1, T param2)
{
	if (param1 > param2)
		return (param1);
	return (param2);
}