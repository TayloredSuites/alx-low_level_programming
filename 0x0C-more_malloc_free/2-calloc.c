#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _calloc - Allocates emory for an array using malloc
 * @nmemb: no of elements in the array
 * @size: no of bytes per member
 * Return: if malloc fails return NULL, if nmemb or size is 0
 * return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;    /* traversal value */
	unsigned int *mem_alloc;

	if (nmemb == NULL)
	{
		return (NULL);
	}
	if (size == NULL)
	{
		return (NULL);
	}
	mem_alloc = malloc(sizeof(unsigned int) * size);
	for (i = 0; i < size; i++)
	{
		mem_alloc[i] = nmemb;
	}
	if (mem_alloc == NULL)
	{
		return (NULL);
	}
	return (mem_alloc);
}
