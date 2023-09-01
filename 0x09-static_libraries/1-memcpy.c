#include "main.h"

/**
 * _memcpy - a function that copies memory area
 * @dest: the final string
 * @src: the source string under consideration
 * @n: number of characters in the string
 *
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
