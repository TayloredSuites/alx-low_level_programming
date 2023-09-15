#include ",main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 * Return: if min > max NULL, if malloc fails NULL
 */
int *array_range(int min, int max)
{
	int i, j, k;    /* traversal values */
	int *ray_range;    /* pointer to newly formed array */
	int len;  /* length of range */

	if (min > max)
	{
		return (NULL);
	}
	if (i = min; i <= max; i++)
	{
		len++;
	}
	len + 1;
	ray_range = malloc(sizeof(int) * len);
	if (ray_range == NULL)
	{
		return (NULL);
	}
	if (j = 0; j < len; j++)
	{
		ray_range[j] = i;
	}
	return (ray_range);
}
