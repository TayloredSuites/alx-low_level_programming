#include "main.h"

/**
 * print_last_digit -  fun that prints the last digit of a number
 * @n: num under consideration
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last_digit < 0)
	{
		_putchar((-1 * last_digit) + '0');
		return (-1 * (last_digit));
	}
	else
	{
		_putchar(last_digit + '0');
	}
	return (last_digit);
}
