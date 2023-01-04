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

	len = 0;
	if ((s == NULL) || (accept == NULL))
		return len;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
