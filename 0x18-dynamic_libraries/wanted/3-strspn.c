#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: the substringunder consideration
 * @accept: no of bytes to accept form the substring
 * Return: number of bytes in the initial segment of s, bytes of acce[t
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len;
	int n;

	len = 0;
	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				len++;
				break;
			}
			else if (accept[n + 1] == '\0')
			{
				return (len);
			}
		}
		s++;
	}
	return (len);
}
