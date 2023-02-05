#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string contaning the binary number
 *
 * Return: A decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, remainder, base, exp; /* Increments the loop */
	unsigned int converted_num;
	long double result = 1.0; /* 2 to the power of 0 */

	if (b == NULL)
	{
		return (0);
	}
	if (b[i] != '0' || b[i] != 1)
	{
		return (0);
	}
	while (exp != 0)
	{
		result *= base;
		--exp;
	}
	for (i = 0; i < _strlen(*b); i++)
	{
		remainder = b[i] % 10;
		b[i] = b[i] / 10;
		converted_num = converted_num + remainder * result;
	}
	return (converted_num);
}
