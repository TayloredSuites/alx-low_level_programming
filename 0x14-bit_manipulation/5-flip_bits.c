#include "main.h"

/**
 * flip_bits - flip to get from one number to another.
 * @n: number to input
 * @m: the next number
 *
 * @Return:  the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, temp;
	unsigned long int helper;
	int flips;

	for (i = 63; i >= 0; i--)
	{
		temp = helper >> i;
		if (temp & 1)
		{
			flips++;
		}
	}
	return (flips);
}
