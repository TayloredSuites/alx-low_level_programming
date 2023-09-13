#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * malloc_checked - Allocates memory using malloc on a pointer
 * @b: arbitrary number
 *
 * Return: if fail status value of 98 ? 0 always
 */
void *malloc_checked(unsigned int b)
{
       void *pointer;

       pointer = malloc(b);
       if (pointer == NULL)
       {
	       return (98);
       }
       return (pointer);
       free(pointer);
}
