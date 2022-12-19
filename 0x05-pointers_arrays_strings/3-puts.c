#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: string pointer
 */

void _puts(char *str)
{
	int i;

	while (i = 0; *str[i] != '\0')
	{
		_putchar(str[i]);
	}

	_putchar('\n')
}
