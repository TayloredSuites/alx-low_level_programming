#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: substring under consideration
 * @accept: mo of byters to accept for s
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
