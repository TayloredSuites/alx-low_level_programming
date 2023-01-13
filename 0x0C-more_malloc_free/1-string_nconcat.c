#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - fun  that concatenates two strings.
 * @n: no of size
 * @s1: first string under consideration
 * @s2: second string under consideration
 * Return: s1 followed by n bytes of s2, if fails return NULL
 * Description: if null treat as "", if n >= s2 use all of s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ss12;
	unsigned int i;

	string1 = malloc(strlen(s1) + 1);
	string2 = malloc(strlen(s2) + 1);
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ss12 = malloc((n + 1) * sizeof(char));
	if (ss12 == NULL)
	{
		return (NULL);
	}
	strcat(string1, string2);
}
