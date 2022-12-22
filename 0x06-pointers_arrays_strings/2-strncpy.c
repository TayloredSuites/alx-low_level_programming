#include "main.h"

/**
* _strncpy -  a function that copies a string
* @dest: pointer to base string being concatenated on
* @src: string beng catenated with a limit to its
* @n: max no of string chars to concatenate  of src to dest, Pad wit EOF char if src has fewer than n characters
* Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	
	i = 0;
	for (j < n;(dest[i] = src[i]) != '\0'; i++)
	{
		i++;
		j++;
	}
	return (0)
}
