#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min no of coins to make change for an amount of money
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i, j, min, num;
	int coin[] = {25, 10, 5, 2, 1};
	char argv;

	for (i = 0, i < 5; i++)
	{
		for (j = 1; j < 5; j++)
		{
			num = atoi(argv[j]);
			min = coin[0];
			if ((num[j] / coin[i]) < min)
			{
				min = coin[i];
			}
		}
		return (0);
	}
}
