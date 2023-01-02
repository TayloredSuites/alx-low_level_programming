#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring
 * @s: the substringunder consideration
 * @accept: no of bytes to accept form the substring
 * Return: number of bytes in the initial segment of s, bytes of acce[t
 */

unsigned int _strspn(char *s, char *accept)
{
	int len = 0;
	char i, j;

	for (i = j; s[i] == accept[j]; i++)
	{
		if (s[i] == NULL && accept[i] = NULL)
		{
			return(len);
		}
	
		len++;
	}
	return (len);

}
