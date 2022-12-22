#include "main.h"

/**
* _strncpy -  a function that copies a string
* @dest: pointer to base string being concatenated on
* @src: string beng catenated with a limit to its
* @n: max no of str chars to cat to dest, Pad wit EOF char if src has fewer than n characters
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;
	
	i = j = 0;
	for (j = 00; j < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (j < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
