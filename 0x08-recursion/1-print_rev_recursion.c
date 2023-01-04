#include "main.h"

/**
 * _print_rev_recursion - prints str in reverse
 * @s: string under consderation
 * Return: Always 0 (Success)
 */

void _print_rev_recursion(char *s)
{
	int i;
	int len;
	char c;

	len = 0;
	for (i = len - 1; i >= len / 2; i--)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - c - 1] = c;
	}
	return (_print_rev_recursion(s));
}
