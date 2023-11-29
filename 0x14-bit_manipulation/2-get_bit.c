#include "main.h"

/**
 * get_bit - the value of a bit at a given index
 * @n: number input by user
 * @index: postion of the index
 *
 * Return: value of bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int value;

	if (index > (sizeof(unsigned long int) * 8 - 1)) /* 8 by 8 is 64 */
	{
		return (-1);
	}
	value = (n >> index) & 1;
	return (value);
}
