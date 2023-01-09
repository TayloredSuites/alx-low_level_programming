#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates char array, initialize with a specific char
 * @size: size of the array
 * @c: specific char to init array
 * Return: pointer to array, size = 0 is NULL, 0 if fails
 */

char *create_array(unsigned int size, char c)
{
	char *creation;
	unsigned int i;

	creation = malloc(sizeof(char) * size);
	if (size == 0)
	{
		return (NULL);
	}
	if (creation == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		creation[i] = c;
	}
	return (creation);
}
