#include <stdio.h>

/*
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j != i; j < 10; j++)
		{
			putchar(i);
			putchar(",");
		}
	}
	putchar('\n');
	return (0);
}
