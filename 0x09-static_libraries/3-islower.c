#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: char under consideration
 * Return: 1 if lowercase, 0 if otherwise
 * Description: A case checker
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
