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
	else
	{
		for (i = 0; i < size; i++)
		{
			/* I is a counter for iterations */
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
