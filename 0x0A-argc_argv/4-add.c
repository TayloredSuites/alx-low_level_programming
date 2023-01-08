#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - entry to main file
 * @argc: name of prog and/or array of cmd lines passed
 * @argv: contains args used in prog
 * Return: 1 for error, and 0 if successful
 * Description: not digits, print Error, followed by 
 * a new line, and return 1
 */

int main(int argc, char *argv[])
{
	int i, n, sum = 0;
	
	for (i = 1; i < argc; i++)
	{
		for (n = 0; argv[i][n] != '\0'; n++)
		{
			if (!isdigit(argv[i][n]))
			{
				printf("Error\n");
				return (1);

			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
