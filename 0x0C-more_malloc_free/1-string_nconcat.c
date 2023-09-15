#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: pointer to initial string
 * @s2: pointer to catenated string
 * Return: if NULL it is empty, otherwise s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dup_str;
	unsigned int i, j;       /* traversal value */
	unsigned int len1;    /* length of s1 */
	unsigned int len2;    /* length of s2 */

	i = j = 0;
	if (s1 == '\0')
	{
		return (NULL);
	}
	if (s2 == '\0')
	{
		return (s1);
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		s1[i] = s2[j];
		i++;
		j++;
	}
	return (s1);
}
