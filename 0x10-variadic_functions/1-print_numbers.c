#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by newline
 * @separator: delimiter ", "
 * @n: argument counter
 *
 * Return: Always 0 which means successsful function carried out
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;

	va_start(params, n);
	if (separator == NULL)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		/* va_arg(params, int); */
		printf("%d", va_arg(params, int));
		/* print separator for all except last count */
		if (i < (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
}
