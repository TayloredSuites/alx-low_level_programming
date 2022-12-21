# include "main.h"

/**
 * main - Check the code
 *
 * Return : Always 0.
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
