#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string under consideration
 * Return: length of string under consideration
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (s + _strlen_recursion(s++));
	}
}
