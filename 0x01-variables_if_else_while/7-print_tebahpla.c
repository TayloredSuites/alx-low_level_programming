#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: prints alphabetin reverse
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
