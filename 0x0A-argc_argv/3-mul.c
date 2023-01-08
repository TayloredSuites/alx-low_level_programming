#include <stdio.h>
#include <stdlib.h>

/**
 * main - entrance to the function
 * @argc: name of prog and/or array of cmd lines passed
 * @argv: contains args used in prog
 * Return: 1 or error if doesnt use two arguments, else 0
 * Descriptions: print the result of the multiplication and  new line
 */

int main(int argc, char *argv[])
{
	int a, b, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	b = atoi(argv[2]);
	res = a * b;
	while (argv[2][0])
	{
		printf("%d\n", res);
	}
	return (0);
}
