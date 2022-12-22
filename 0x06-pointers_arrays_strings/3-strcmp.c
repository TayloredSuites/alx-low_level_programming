<<<<<<< HEAD
#include "main.h"

/**
 * _strcmp -  a function that compares two strings returns <0 if s1 < s2
 * @s1: the string which the other is compared against
 * @s2: this string is compared to the first argument
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
	}
	return (s1[i] - s2[i]);
}
