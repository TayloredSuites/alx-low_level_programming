#include "main.h"

/**
 * rev_string - a function that prints a string, in reverse,
 * followed by a new line
 * @s: Pointer to a string
 * Return: length of string as i
 */

void lenstr(char *s)
{
	int i;
	
	while (s[i] != '\0')
		++i;
	return i;
}		

void rev_string(char *s)
{
	int i;
	char len = lenstr(s);

	for (i = len - 1; i >= 0; i--)
		putchar(s[i]);
}
