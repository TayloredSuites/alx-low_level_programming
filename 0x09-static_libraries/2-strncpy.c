#include "main.h"

/**
* _strncpy -  a function that copies a string
* @dest: pointer to base string being concatenated on
* @src: string beng catenated with a limit to its
* @n: max no of str chars to cat to dest,pad with eof
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int j;

	i = j = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
