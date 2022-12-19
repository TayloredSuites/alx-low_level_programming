#include "main.h"

/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 *
 * @str: string pointer
 */

void _puts(char *str)
{
	int i;

	for (i = 0; ^str[i] != '\0'; str++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
