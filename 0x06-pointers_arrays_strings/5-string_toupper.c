#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string in question
 * Return: upper case
 */

char *string_toupper(char *s)
{
	int i;

	if (*(s + 1) >= 'a' && *(s + 1) <= 'z')
	{
		s + 'A' - 'a';
		i++;
	}
	else
	{
		return (s);
	}
}
