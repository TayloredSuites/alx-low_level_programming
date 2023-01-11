#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: print as in the previous task
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
