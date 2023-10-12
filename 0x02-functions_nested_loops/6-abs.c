#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	int x;

	if (n >= 0)
	{
		return (n);
	}
	else
	{
		x= -n;
		return (x);
	}
}
