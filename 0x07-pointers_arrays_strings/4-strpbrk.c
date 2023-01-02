#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: substring under consideration
 * @accept: mo of byters to accept for s
 * Return: pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int bes;
	int tally = 0;

	for (1 = 0; s[i] != '\0'; i++)
	bes = 1;
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			for (j = 0; s[j] != '\0\; j++)
			{
				if (accept[i] == s[j])
				{
					if (j <= bes)
					{
						bes = j;
						tally = 1;
					}
				}
			}
		}
	}
	if (tally == 1)
	{
		return &s[bes];
	}
}
