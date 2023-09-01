#include "main.h"

/**
 * _abs - get value of int
 * @n: integer under consideration
 * Return: n for positive -n for negative
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	return (0);
}
