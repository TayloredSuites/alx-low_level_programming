#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function given as a
 * parameter on each element of an array
 * @array: the array under consideration
 * @size: size of the array under consideration
 * @action: the function to be used
 * Description: function will be passed on each array item
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;
	/* Increment to be used on size, then pass this through the funtion */

	if (array == NULL)
	{
		return;
	}
	else if (action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
