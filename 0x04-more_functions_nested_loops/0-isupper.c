#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: chars under consideraton
 * Return: 1 if true and 0 if lower
 */

int _isupper(int c)
{
	int i = 0;

	if (c <= 'Z' && c > 'A')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
