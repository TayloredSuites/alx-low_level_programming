#include "main.h"

/**
 * print_most_numbers - nos from 0 to 9 excl 2 and 4
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 || i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
