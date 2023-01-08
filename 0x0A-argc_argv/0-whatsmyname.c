#include <stdio.h>

/**
 * main - Entry point
 * @argc: name of prog and/or array of cmd lines passed
 * @argv: contains args used in prog
 * Return: Always 0 (Success)
 * Description: prints its name, followed by a new line.
 */

int maint(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
