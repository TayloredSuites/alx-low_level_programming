#include <stdlib.h>
#include "main.h"

/**
 * free_grid -  2 dimensional grid previously created by your alloc_grid function
 * @grid: deref pointer to grid
 * @height: 1D len of array
 * Returns: Always 0 (Success)
 * Description:  a function that frees a 2 dimensional grid calloc
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
