#include "main.h"

/**
* *_strncpy -  a function that copies a string
* @dest: pointer to base string being concatenated on
* @src: string beng catenated with a limit to its
* @n: max no of string chars to concatenate  of src to dest
* Pad wit EOF char if src has fewer than n characters.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	
	for (j < n; i = 0; (dest[i] = src[i]) != '\0')
	{
		i++;
		j++;
	}
}
