#include "amin.h"

/**
 * times_table - a function that prints the 9 times table, starting with 0
 */

void times_table(void)
{
	unsigned int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			i++ * j;
			j++ * i;
		}
	}
}