#include "main.h"

/**
 * _sqrt_recursion -  the natural square root of a number
 * @n: number under condideraton
 * Return: recursive square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * _sqrt_recursion(n - 1));
	}
}
