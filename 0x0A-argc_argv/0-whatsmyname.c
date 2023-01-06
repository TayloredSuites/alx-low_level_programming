#include <stdio.h>

/**
 * main - Entry point
 * @argc: name of prog and no of cmd lines passed
 * @argv: contains args used in prog
 * Return: Always 0 (Success)
 * Description: prints its name, followed by a new line.
 */

int main(int argc, char **argv)
{
	int i = 0;

	if (argc[0])
	{
		printf("%s\n", argv);
	}
	return (0)
}
