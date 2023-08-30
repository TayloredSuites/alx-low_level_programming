#include "main.h"


/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string under consideration
 * Return: string followed by new line
 */

void _puts_recursion(char *s)
{
	
	if (s != NULL)
	{
		putchar(s);
		putchar(s + _puts_recursion(s + 1));
	}
	putchar('\n');
}
