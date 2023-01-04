#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: print numbers in hexadecimal
 */

int main(void)
{
	int i;
	char j;

	for (i = 0; i <= 16; i++)
	{
		for (j = 'a'; j <= 'f'; j++)
		{
			putchar(j);
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
