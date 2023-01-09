#include <stdlib.h>

/**
 * strdup - returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a param
 * @str: str under consideration that is copied
 * Return: pointer  to alloc space , Null if str == Null
 */

char *_strdup(char *str)
{
	char *strptr;
	unsigned int i;

	strptr = malloc(sizeof(char) * i);
	if (str == NULL || strptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i]; i++)
	{
		for (j = 0; j < i; j++)
		{
			strptr[j] = str[j];
		}
	}
	return (strptr);
}
