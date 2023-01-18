#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - converter fact from str to iny
 * @argc: no of cli cmds passed
 * @argv: ptr to array of argc cli cmd passed in
 *
 * Return: Always 0 since it is a void fun
 */
int main(int argc, char **argv)
{
	int a, b;
	char *s;
	int (*fun)(int, int);
	/* Referring to prototype in get-op-func.c */

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	/* 0 is name 1, 2 are the ints passed */
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = atoi(argv[2]);
}
