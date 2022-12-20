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
	
	if (len = 0; *s != '\0'; s++)
		len++;
	
	for (i = 0; i <= len; i++)
	{
		while (s[i] != '\0')
		{
		putchar(s[i]);
		}
	}
}
