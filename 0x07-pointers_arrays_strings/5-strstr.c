#include "main.h"

/**
 * _strstr - a function that locates a substring
 * @haystack:string under consideration
 * @needle:the first occurrence of the substring needle
 * Return: pointer to the beginning of the located substring, or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	char *i, *j;

	j = needle;
	if (*j == 0)
	{
		return *haystack;
	}

	for (; *haystack != 0; haystack++)
	{
		if (*haystack != *j)
		{
			continue;
		}

		i = haystack;
		while (1)
		{ 
			if (*j == 0)
			{
				return *haystack;
			}
			if (*i++ != *b++)
			{
				break;
			}
		}
		j = needle;
	}
	return NULL;
}
