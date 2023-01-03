#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 */

void print_rev(char *s)
{
	int i;
	int max;

	i = 0;
	for (i <= max; s[i] != '\0'; i++)
	{
		putchar(s[max--]);
	}
	putchar('\n');
}
