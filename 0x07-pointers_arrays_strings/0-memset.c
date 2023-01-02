#include "main.h"

/**
 * _memset - a function that fills memory with a constant byte
 * @s: a char pointer to a values address
 * @b: a character value whose address can be pointed to
 * @n: an unsigned integer indicating no of bytes to be filled
 * Return: memory that is filled
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
