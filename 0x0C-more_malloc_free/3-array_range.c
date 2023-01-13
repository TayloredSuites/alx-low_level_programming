#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of ordered values
 * @min: minimum integer
 * @max: maximum integer
 *
 * Return: pointer to the newly created array
 */

int *array_range(int min, int max)
{
	void *ptrarray;
	unsigned int i;

	if (min > max)
	{
		return (NULL);
	}
	ptrarray = malloc(sizeof(int) * ((max - min) + 1));
	if (ptrarray  == 0)
	{
		return (NULL);
	}
	for (i = min; i < max; i++)
	{
		ptrarray[i] = min;
	}
	return (ptrarray);
}
