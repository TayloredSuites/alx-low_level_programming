#include "main.h"

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: number selected
 * @index: position of the bits
 *
 * Return: value of 1 bit to 1 if it woekd and -1 if t failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 1;
	unsigned long int temp = 1 << index;

	if (index > 32)
	{
		return (-1);
	}
	*n = ((n & ~temp) | bit << index);
	return (-1);
}
