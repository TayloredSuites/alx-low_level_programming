#include <Stdio.h>

/**
 * main - Entry Point
 * Return: Always 0 (Success)
 * Description: print numbers in hexadecimal
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{

		putchar("%x", i);
	}
	putchar('\n');
	return (0);
}
