# include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: pointer to the initial string
 * @src: pointer to the string that is added (catenated) to the initial string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while ((dest[i] = src[j]) != '\0')
	{
		i++;
		j++;
	}
	return (dest);
}
