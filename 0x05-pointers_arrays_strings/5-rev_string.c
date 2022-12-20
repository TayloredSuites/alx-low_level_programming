#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 */

void rev_string(char *s)
{
	int i;
	int len;
	
	for (i = len - 1; i >= 0; i--)
	{
		while (s[i] != '\0')
		{
		putchar(s[i]);
		}
	}
}
