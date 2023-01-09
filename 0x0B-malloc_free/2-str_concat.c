#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings memloc
 * @s1: first string unders consideration
 * @s2: second string under consideration
 * Return: pointer and NULL on failure, null terminated concat
 * Description: if NULL is passed, treat it as an empty string
 */

char *str_concat(char *s1, char *s2)
{
	char *concated;
	unsigned int i;
	unsigned int length;

	if (s1 == NULL || s2 == NULL)
	{
		return ("");
	}
	if (concated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= length; i++)
	{
		concated = malloc(sizeof(char) * i);
		concated[i++] = s1[i];
	}
	for (i = 0; i <= length; i++)
	{
		concated = malloc(sizeof(char) * i);
		concated[i++] = s2[i];
	}
	return (concated);
}
