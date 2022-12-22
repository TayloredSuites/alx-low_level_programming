#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: string in question
 * Return: upper case
 */

char *string_toupper(char *s)
{
	if (s >= 'a' && s <= 'z')
	{
		s + 'A' - 'a';
	}
	else
	{
		return (s);
	}
}
