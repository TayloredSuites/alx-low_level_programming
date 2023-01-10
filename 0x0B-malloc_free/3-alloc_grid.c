#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - eturns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * @Return: NULL on failure, If width or height is 0 or
 * negative, return NULL
 * Description: Each element of the grid should be initialized to 0
 */

int **alloc_grid(int width, int height)
{
	int *array, iheight, iwidth;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (iheight = 0; iheight < height; iheight++)
	{
		array[iheight] = malloc(sizeof(int) * width);
		if (array[iheight] == NULL)
		{
			for (; iheight >= 0; iheight--)
			{
				free(array[iheight]);
			}
			free(array);
			return (NULL);
		}
	}
	for (iheight = 0; iheight < height; iheight++)
	{
		for (iwidth = 0; iwidth < width; iwidth)
		{
			array[iheight][iwidth] = 0;
		}
	}
	return (array);
}
