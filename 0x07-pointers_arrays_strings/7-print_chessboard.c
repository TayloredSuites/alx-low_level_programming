#include "main.h"

/**
 * print_chessboard - function that prints chessboard
 * @a: the row address pointer of first array element
 * Return: pointer to substring
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			if (j == 7)
			{
				_putchar(a[i][j]);
				_putchar('\n');
			}
			else
			{
				_putchar(a[i][j]);
			}
		}
	}
}
