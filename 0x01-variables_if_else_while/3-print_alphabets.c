#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (success)
 * Description: Print in lowercase then upper then newline
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
