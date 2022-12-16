#include "main.h"

/**
 * largest_number - returens the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: thrd integer
 * Return: largest integer
 */

int largest_numbmer(int a, int b, int c)
{
	int largest;

	if (a > b && c > b)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else if (c == b && c > a)
	{
		largest = c;
	}
	else
	{
		largest = b;
	}
	return (largest);
}
