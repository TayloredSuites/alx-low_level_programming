#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string contaning the binary number
 *
 * Return: A decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, remainder; /* Increments the loop */
	unsigned int converted_num;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		converted_num = 2 * converted_num + (b[i] - '0');
	}
	return (converted_num);
}
