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

	for (i = 0; i <= max; i++)
	{
		while (s[max] != '\0')
		{
		putchar(s[max--]);
		}
	}
	putchar('\n');
}
