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

	i = j = 0;
	while (*(dest + i))
	{
		i++;
	}
	while (j < n && *(src +j))
	{
		*(dest + i) = *(src +j);
		i++;
		j++;
	}
	if (j < n)
	{
		*(dest + i) = *(src + j);
	}
	return (dest);
}
