#include <stdlib.h>

/**
 * strdup - returns a pointer to a newly allocated space in
 * memory, which containsi a copy of the string given as a param
 * @str: str under consideration that is copied
 * Return: pointer  to alloc space , Null if str == Null
 */

char *_strdup(char *str)
{
	char *strcopy;
	unsigned int i;
	unsigned int n;

	
	for (i = 0; str[i]; i++)
	{
		strcopy = malloc(sizeof(char) * i);
		for (n = 0; n < i; n++)
		{
			strcopy[n] = str[n];
		}
	}
	if (str == NULL || strcopy == NULL)
	{
		return (NULL);
	}
	return (strcopy);
}
