#include "main.h"

/**
 * more_numbers -  a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */

void more_numbers(void)
{
	int i;
	/* I is the number of times to iterate the printing of j */
	/* J is the set of numbers to be printed */
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
				_putchar((j % 10) + '0');
			}
			else
			{
				;
			}
		}
	}
	_putchar('\n');
}
