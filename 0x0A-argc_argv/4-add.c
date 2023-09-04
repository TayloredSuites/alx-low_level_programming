#include "main.h"

/**
 * main - adds positive nums, prints result and newline
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i = 2, j = 0, arg_val;
	char argv;

	arg_val = atoi(argv[i]);
	if (arg_val > 0)
	{
		arg_val += arg_val
