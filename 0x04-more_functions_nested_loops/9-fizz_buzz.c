#include "main.h"
#include <stdio.h>

/**
 * main - A discrimminatory function
 * @n: the number needed for the lisst
 */

void main(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
		{
			if ((n % 3) == 0)
			{
				printf("fizz");
			}
			else if ((n % 5) == 0)
			{
				printf("buzz");
			}
			else if ((n % 3) == 0 && (n % 5) == 0)
			{
				printf("FizzBuzz");
			}
			else
			{
				_putchar(n);
			}
			_putchar(' ');
			_putchar('\n');
		}
		else
		{
			_putchar('\n');
		}
	}
}
