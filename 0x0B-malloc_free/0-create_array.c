#include "main.h"
#include <stdio.h>

/**
 * create_array - create arrays of chars and inits with specific char
 * @size: size of array
 * @c: char in the array
 *
 * Return: pointer to the array, NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	int i; /* For traversal */

	array = malloc((*char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = 'c';
	}
	return (array);
	free(array);
	return (0);
}

