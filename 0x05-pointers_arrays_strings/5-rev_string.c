#include "main.h"

/**
* rev_string -  a function that reverses a string
* @s: String pointer
*/

void rev_string(char *s)
{
    int i;
    
    while (s != '\0')
    {
      i++;
      }
      for (i -= 'z', i >= 'a'; --i)
      {
        putchar(s[i]);
        }
}
