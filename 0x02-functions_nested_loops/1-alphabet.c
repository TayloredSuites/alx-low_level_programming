#include "main.h"

/**
 * main - Entry point
 * Return: Always0 (Success void
 * Description: prints the alphabet, in lowercase, followed by a new line
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
