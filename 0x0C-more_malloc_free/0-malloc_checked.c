#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - fun that allocates mem using malloc
 * @b: unsigned int that looks like malloc val itself
 * Return: pointer to allocated memory
 * Description: if pass 0, if fail return 98
 */

void *malloc_checked(unsigned int b)
{
	void *allmem;

	allmem = malloc(sizeof(b));
	if (allmem == NULL)
	{
		return (98);
	}
	else
	{
		return (allmem);
	}
}
