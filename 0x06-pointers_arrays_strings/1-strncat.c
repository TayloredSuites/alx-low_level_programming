# include "main.h"

/**
 * *_strncat - a function that concatenates two strings
 * @dest: pointer to the initial string
 * @src: pointer to the string that is added (catenated) to the initial string
 * @n: an integer indicating the number of bytes allowed in the src object, ie add n characters to src
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = j = 0; j < n && dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
