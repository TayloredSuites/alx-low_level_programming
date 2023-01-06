#include <stdio.h>
#include "main.h"

/**
 * main - prints no of args passed 
 * @argc: no of cmds and/or name of prog
 * @argv: an array of argc
 * Return: exit(0)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	print("%d\n", argc - 1);
	return (0);
}
