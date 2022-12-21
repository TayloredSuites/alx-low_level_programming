#include "main.h"

/**
* *_strncpy -  a function that copies a string
* @dest: pointer to base string being concatenated on
* @src: string beng catenated with a limit to its
* @n: max no of string chars to concatenate  of src to dest
* Pad with '\0' if ct has fewer than n characters.
*/

char *_strncpy(char *dest, char *src, int n)
{
  int i;
  int j;
  
  i = 0;
  j < n;
  
  while (dest[i] != '\0')
  {
    i++;
  }
  
  while((*dest[i++] = *src[j++]) != '\0')
  {
    i++;
    j++;
  }
}
