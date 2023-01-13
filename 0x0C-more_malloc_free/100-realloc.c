#include "main.h"
#include <stdlib.h>

/**
 * _realloc - fun to reallocate a mem block using malloc and free
 * @ptr: pointer to the old block base address
 * @old_size: size of the block initially
 * @new_size: size I want it to have now
 *
 * Return: pointer to reallocated block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	ptr = malloc(old_size);
	if (new_size > old_size)
	{
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		malloc(new_size) = malloc(old_size);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free (ptr);
	return (0);
}
