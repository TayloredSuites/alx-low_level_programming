#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array
 * @Return: NULL on failure, If width or height is 0 or
 *  negative, return NULL
 *  Description: Each element of the grid should be initialized to 0
 */

int **alloc_grid(int width, int height)
{
	int *array;
