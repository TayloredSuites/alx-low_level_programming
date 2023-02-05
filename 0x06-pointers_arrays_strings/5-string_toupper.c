#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string in question
 * Return: upper case
 */

char *string_toupper(char *s)
{
	int i;

	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			*s + 'A' - 'a';
			i++;
		}
	}
	return (s);
}
