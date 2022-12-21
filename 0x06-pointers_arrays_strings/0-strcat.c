# include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 *
 * Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;

	while ((dest[i++] = src[j++]) != '\0')
		j++;
		i++;
	}
	return (dest);
}
