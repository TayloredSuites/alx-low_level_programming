#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in
 * memory, which containsi a copy of the string given as a param
 * @str: str under consideration that is copied
 * Return: pointer  to alloc space , Null if str == Null
 * Description: a function that returns a pointer to new alloc
 */
char *_strdup(char *str)
{
	char *strcopy;
	unsigned int i;
	unsigned int n;
	
	if (str == NULL || strcopy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		strncopy = malloc(sizeof(char) * i);
		for (n = 0; n < i; n++)
		{
			strcopy[n] = str[n];
		}
	}
	return (strcopy);
}
