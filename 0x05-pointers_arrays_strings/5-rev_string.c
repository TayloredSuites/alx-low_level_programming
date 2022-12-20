#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}

void rev_string(char *s)
{
	int i;
	int perch = _strlen(s);

	do
	{
		for (i = perch - 1; i >= 0; i--)
		putchar(s[i]);
	}
}
