#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * alloc_grid - Two-D array of integers pointer to pointer
 * @width: width of array
 * @height: height of array
 *
 * Return: Pointer to a two dim array of integers
 */
int **alloc_grid(int width, int height)
{
	int i, j;   /* traversal value for width and height */
	int *two_dim;    /* array being created */

	if (width == NULL || height == NULL)
	{
		return (NULL);
	}
	two_dim = malloc(sizeof(*int) * (height * width));
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			two_dim[i] = putchar('0');
		}
	}
	return (two_dim);
	free(two_dim);
}
