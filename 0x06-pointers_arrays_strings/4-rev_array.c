#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array of integers
 * @n: amount to pad with if strng s empty 
 */

void reverse_array(int *a, int n)
{
	int g, f, h;

	for(f = 0; h = (n - 1); f < h; f++, h--)
	{
		g = a[f];
		a[g] = a[h];
		a[h] = g;
	}
}
