#include <stdio.h>
#include "main.h"

/**
 * main - prints no of args passed 
 * @argc: no of cmds and/or name of prog
 * @argv: an array of argc
 * Return: exit(0)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 1; i <= argc; i++)
	{
		printf("Iterating at %d\n", i)
	}
	print("%d\n", argc)
	return (0);
}
