#include "main.h"

/**
 * int_strlen - a function that returns the length of a  string
 *
 * @s: string input
 *
 * Return: Always 0 (Success)
 */

int _strlen(char *s)
{
	int len = 0;
	while (*(s + len) != '\0')
		len++;
	return (len);
}
