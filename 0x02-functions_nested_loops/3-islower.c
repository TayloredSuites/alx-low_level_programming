#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * @c: char under consideration
 * Return: 1 if lowercase, 0 if otherwise
 * Description: A case checker
 */

int _islower(int c)
{
	for (c >= 'a'; c <= 'z'; c++)
	{
		return (1);
	}
	for (!(c >= 'a'; c <= 'z'; c++))
	{
		return (0);
	}
}
