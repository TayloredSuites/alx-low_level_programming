#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string under consideration
 * Return: all caps string under consideration
 */

char *cap_string(char *)
{
	int i, j;

	i = 0;
	while (*(s + i) != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
			{
				*(s + i) = *(s + i) - 32;
			}
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (a[j] == *(s + i - 1))
					{
						*(s + i) = *(s + i) - 32;
					}
				}
			}
		}
	}
}
