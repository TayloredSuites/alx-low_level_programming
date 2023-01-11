#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98, foll'd by a new line
 * @n: the number to start counting from
 * Return: All nums until 98 from n
 */

void print_to_98(int n)
{
	if (n || n <= 98)
	{
		n++;
		printf("%i", n);
	}
	else
	{
		printf("This is out of range of stuff");
	}
}
