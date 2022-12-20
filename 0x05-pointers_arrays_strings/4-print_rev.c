#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 */

void print_rev(char *s)
{
	int i;

	for (i -= s[i]; i >= s[0]; --i)
	{
		while (s[i++] != '\0')
		{
		putchar(s[i]);
		}
	}
	putchar('\n');
}
