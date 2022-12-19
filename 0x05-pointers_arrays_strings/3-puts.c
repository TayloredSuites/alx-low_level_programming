#include "main.h"

/**
 * _puts(char *str) - a function that prints string and new line to stdout
 *
 * @str: string
 */

void _puts(char *str)
{
	while (str != '\0')
		putchar(str);
}
