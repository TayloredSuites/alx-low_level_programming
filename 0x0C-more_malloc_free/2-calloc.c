#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: number of members ( elements)
 * @size: no of bytes of each element of the array
 *
 * Return: return NULL if malloc fails, if nmemb or size = 0 it fails
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= nmemb; i++)
	{
		ptr[i] = '0';
	}
	return (ptr);
}
