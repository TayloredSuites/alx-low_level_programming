#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * str_concat - Concatenates two strings
 * @s1: original or concatenated string
 * @s2: original or concatenated string
 *
 * Return: pointer to memory for concatenated str
 */

char *str_concat(char *s1, char *s2)
{
	 char *catenated;
	 int i, j;    /*traversal value */
	 int len1, len2;
	 if (s2 == NULL)
	 {
		 return (NULL);
	 }
	 for (i = 0; *s2 != '\0'; i++)
	 {
		 len2++;    /* len of s2 */
	 }
	 for (j = 0; *s1 != '\0'; j++)
	 {
		 len1++;    /* len of s1 */
	 }
	 catenated = malloc(sizeof(char) * (len1 + len2 + 1));
	 for (i = 0; i < len1; i++)
	 {
		 catenated[i] = s1[i];
	 }
	 for (i = len1; i < (len1 + len2); i++)
	 {
		 catenated[i] = s2[i];
	 }
	 return (catenated);
	 free(catenated);
}
