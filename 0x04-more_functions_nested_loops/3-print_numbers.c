#include "main.h"

/**
 * print_numbers - prints nums from 0 to 9 and newline
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
