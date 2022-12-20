#include "main.h"

/**
* puts2 - prints every other character of a string, starting with the first 
* character, followed by a new line
* @str: pointer to a string value
*/

int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
		len++;
	return (len);
}

void puts2(char *str)
{
    int i;
    int perch = _strlen(str);
    
    for (i >= 0; i <= perch; i++)
    {
        while (str != '\0')
        {
            putchar(str);
        }
    }
    putchar('\n');
}
