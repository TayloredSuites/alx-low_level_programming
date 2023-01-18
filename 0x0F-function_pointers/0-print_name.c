#include "function_pointers_h"

/**
 * print_name - a function that prints a name
 * @name: name you want printed
 * @f: pointer to function that takes a name and sits there
 */
void print_name(char *name, void (*f)(char *))
{
	/* Checks if entries are null. Avoiding null pointer error */
	(if f == NULL || name == NULL)
	{
		return;
	}
	f(name);
}
