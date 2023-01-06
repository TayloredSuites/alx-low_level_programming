#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: name of prog and no of cmd lines passed
 * @argv: contains args used in prog
 * Return: Always 0 (Success)
 * Description: prints its name, followed by a new line.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0)
}
