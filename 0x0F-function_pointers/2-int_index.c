#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 * @array: pointer to int of array under consideration
 * @size: size of array under sonsideraton
 * @cmp: pointer to the function to be used to compare values
 * Return: size < 0 ret 1, if no match ret -1
 * Description: cmp is waiting for input as its already rigged to work
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;	/* Increment counter */

	if (array == NULL || cmp == NULL)
	{
		return (0);
	}
	else if (size <= 0)
	{
		return (-1);
	}
	else if (cmp(array[i]) == 0)
	{
		return (-1);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			cmp(array[i]);
		}
	}
	return (i);
}
