#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: amount to pad with if strng s empty 
 */

void reverse_array(int *a, int n)
{
	int i, temp_str;

	for (i - (n - 1); i >= (n / 2); i--)
	{
		temp_str = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp_str;
	}
}
