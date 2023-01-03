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

	while (s[i] == '\0')
	{
		char temp;
		char i = '\0';
		char b = ' ';

		temp = b;
		i = b;
		b = temp;

		putchar(s[max--]);
		putchar('\n');
	}
	for (i = 0; i <= max; i++)
	{
		while (s[i] != '\0')
		{
			putchar(s[max--]);
		}
		putchar('\n');
	}
	
	while (s[i] == '\0')
	{
		char temp;
		char i = '\0';
		char b = ' ';
		
		temp = b;
		i = b;
		b = temp;
		
		putchar(s[max--]);
		putchar('\n');
	}
}
