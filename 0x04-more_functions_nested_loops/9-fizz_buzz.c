#include "main.h"
#include <stdio.h>

/**
 * fizz_buzz - A discrimminatory function
 */

void fizz_buzz(void)
{
	int n, i;

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
		_putcharr('\n');
	}
}
