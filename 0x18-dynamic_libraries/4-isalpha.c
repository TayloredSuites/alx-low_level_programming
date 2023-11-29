#include "main.h"

/**
 * _isalpha - finds letter of alphabet
 * @c: character under consideration
 * Return: 1 if letter and 0 if not letter
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c < 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
