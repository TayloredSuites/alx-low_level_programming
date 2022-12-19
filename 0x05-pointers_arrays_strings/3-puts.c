#include "main.h"

/**
 * _puts(char *str) - a function that prints string and new line to stdout
 *
 * @str: string
 */

void _puts(char *str)
{
	int i;

	while (str[i] != '\0')
	{
		_putchar(str);
	}

	_putchar('\n')
}
