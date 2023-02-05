#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: ponter to the number that s input
 * @index: position for setting bit
 *
 * Return: 1 if it worked and -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit = 0;
	unsigned long int temp = 0 << index;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	*n = ((n & ~temp) | bit << index);
	return (1);
	return (*n);
}
