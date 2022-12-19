#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: string pointer
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i])
	{
	if ((str[i] >= 'a') && (str[i] != '\0'))
		++i;
	}
	_putchar(str);
}
