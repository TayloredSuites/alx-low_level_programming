#include <stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: 
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		while (i != 'e' || i != 'q')
		{
			putchar(i);
			putchar('\n');
		}
	}
	return (0);
}
