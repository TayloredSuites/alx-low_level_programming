#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: print all letters except q and e
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		for (i != 'q'; i != 'e'; i++)
			putchar(i);
	}
	putchar('\n');
	return (0);
}
