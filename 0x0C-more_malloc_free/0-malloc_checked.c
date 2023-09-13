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
       unsigned int *points;

       points = malloc(sizeof(int));
       if (points == NULL)
       {
	       exit (98);
       }
       return (points);
       free(points);
}
