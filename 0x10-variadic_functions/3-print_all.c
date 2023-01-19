#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: char c, integer i, float f and char *string s
 *
 * Return: Always 0
 * Description: Any other char should be ignored, 2 while, 2 if
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	/* Creating counter */
	unsigned int n;
	va_list anything;

	n = 9;
	va_start(anything, n);
	if (format == NULL)
	{
		printf("(nil)");
	}
	for (i = 0, i < n; i++)
	{

		switch (format)
		{
			case 'c':
				printf("%c", va_arg(anything, char));
				break;
			case 'i':
				printf("%i", va_arg(anything, int));
				break;
			case 'f':
				printf("%f", va_arg(anything, double));
				break;
			case 's':
				printf("%s", va_arg(anything, char*));
				break;
			default:
				printf("Not included");
		}
	}
	va_end(anything);
	printf("\n");
}
