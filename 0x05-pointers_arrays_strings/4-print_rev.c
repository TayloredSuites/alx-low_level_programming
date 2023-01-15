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

	max = 0;
	while (s[max] != '0')
	{
		max++;
	}
	for (i = 0; i <= max; i++)
	{
		s[i] = s[max--];
		putchar(s[i]);
	}
	putchar('\n');
}
