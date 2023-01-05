#include "main.h"

/**
 * is_prime_int - if the input integer is a prime number
 * @i: denumerator
 * @j: numerator
 * Return: 1 if prime number or 0 if not
 */

int is_prime_int(int i, int j)
{
	if ((j % 2) == 0 || ((j / i) != 1))
	{
		return (0);
	}
	else if ((i / j) != i)
	{
		return (0);
	}
	else
	{
		return (is_orime_int(i + 1, j));
	}
}

/**
 * is_prime_number - if the input integer is a prime number
 * @n: input integer
 * Return: 1 if prime number or 0 if no
 */

int is_prime_number(int n)
{
	if (n > 1)
	{
		return (is_prime_int(2, n));
	}
}
