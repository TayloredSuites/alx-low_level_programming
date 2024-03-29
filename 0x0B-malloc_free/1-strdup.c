#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _strdup - Pointer to duplicated string in memory
 * @str: string to be duplicated
 *
 * Return: Duplicated string memory
 */

char *_strdup(char *str)
{
	char *dup;
	int i;   /* For traversal */
	int len;   /* length of the string */

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; *str != '\0'; str++)
	{
		len++;
	}
	dup = malloc(sizeof(char) * len + 1);
	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	return (dup);
	free(dup);
}
