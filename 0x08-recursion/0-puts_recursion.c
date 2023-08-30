#include "main.h"


/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string under consideration
 * Return: string followed by new line
 */

void _puts_recursion(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		putchar(s[i]);
		putchar('\n');
	}
}
