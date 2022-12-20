#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 */

void rev_string(char *s)
{
	int i;
	int bkwd = strlen(s--);

	for (i = 0; i <= max; i++)
	{
		while (s[i] != '\0')
		{
		putchar(bkwd);
		}
}
