#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * _realloc - reallocates memory block using malloc and free
 * @ptr: pointer to mem previously allocated with a call to malloc
 * @old_size: size in bytes of allocated space for ptr malloc(old_si\
 * ze)
 * @new_size: new size in bytes of the new mem block
 * Return: if new_size > old_size do not init, if == return ptr, if\
 * ptr NULL then its == to malloc(new_size), if new_size == 0 && ptr\
 * is not NULL, then call == free(ptr) RETURN NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
