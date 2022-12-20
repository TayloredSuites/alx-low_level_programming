#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 * Return: length of string as i
 */

void rev_string(char *s)
{
	int i;
	char len;

	do
	{
		for (i = len - 1; i >= 0; i--)
		putchar(s[i]);
	}
	while (s[i] != '\0');
		++i;
}
