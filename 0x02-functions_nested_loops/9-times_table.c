#include "main.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	unsigned int i, j;

	for (i = 0; i < 9; i++)
	{
		_putchar('0',);
	}
	for (i = 0; i < 9; i++)
	{
		_putchar('0,');
		_putchar('\n');
		for (j = 0; j < 9; j++)
		{
			_putchar(*(i++ * 9 + j));
		}
	}
}
