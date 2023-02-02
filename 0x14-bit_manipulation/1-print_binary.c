#include "main.h"

/**
 * print_binary -  prints the binary representation of a number
 * @n: the number to be printed n binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int bin_rep;
	int i; /* Increment number */

	for (i = sizeof(unsigned long int); i >= 0; i++)
	{
		n = n >> i;
		if (n & 1)
		{
			_putchar("1");
		}
		else
		{
			_putchar("0");
		}
	}
}
