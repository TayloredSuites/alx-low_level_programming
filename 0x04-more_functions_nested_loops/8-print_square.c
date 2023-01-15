#include "main.h"

/**
 * print_square -  a function that prints a square, followed by a new line
 * @size: desired size of the square
 */

void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 1; i < size; i++)
	{
		_putchar('#');
		for (j = 1; j < size; j++)
		{
			_putchar('#');
			_putchar('\n');
		}
		_putchar('\n');
	}
}
