#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings, followed by newline
 * @separator: delimiter
 * @n: argument counter
 *
 * Return: Always 0 for succesful function run
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list string;

	va_start(string, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(string, char*));
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
