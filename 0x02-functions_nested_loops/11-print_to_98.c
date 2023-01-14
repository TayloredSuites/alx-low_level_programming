#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, foll'd by a new line
 * @n: the number to start counting from
 * Return: All nums until 98 from n
 */

void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		printf("%i, ", n);
	}
	return (n);
}
