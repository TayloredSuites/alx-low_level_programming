#include <stdio.h>

/**
 * main - all arguments received
 * @argc: name of prog and/or array of cmd lines passed
 * @argv: contains args used in prog
 * Return: Always 0 (Success)
 * Description: a program that prints all arguments it receive
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
