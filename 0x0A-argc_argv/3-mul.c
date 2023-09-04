#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints reuslt of multiplication and newline
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 2;

	if (argc > i)
	{
		result = atoi(argv[i] * argv[i + 1]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
