#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string under consideration
 * Return: length of string under consideration
 */

int _strlen_recursion(char *s)
{
	int len;
	int i;

	len = 0;
	for (i = 0; i <= len; i++)
	{
		if (*s)
		{
			s++;
			len++;
		}
	}
	return (len + _strlen_recursion(s));

