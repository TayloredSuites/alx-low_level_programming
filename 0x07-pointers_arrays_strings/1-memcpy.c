#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest - the final string
 * @src - the source string under consideration
 * @n - number of characters in the string
 * Returns: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptrdest = dest;
	char *ptrsrc = src;
	int  i, j;

	i = j = 0;
	for (j = 0; j < n && *src[i] != '\0'; i++)
	{
		*dest[i] = *src[i];
	}
	while (j > n)
	{
		*dest[i++] = '\0';
	}
	
	if ((ptrdest != NULL) && (ptrsrc != NULL))
	{
		while (n)
		{
			*(ptrdest++) = *(ptrsrc++);
			--n;
		}
	}
	return (dest);
}
