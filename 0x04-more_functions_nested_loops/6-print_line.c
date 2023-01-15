#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @n: length of line specified by user
 */

void print_line(int n)
{
	int i;
	/* Incrementing for any n scanf("%i", &n) */

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
