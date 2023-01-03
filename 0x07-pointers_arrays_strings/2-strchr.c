#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: a string
 * @c: character
 * Return: a character from the string
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
