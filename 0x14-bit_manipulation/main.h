#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
#include <stddef.h>


/**
 * strlen - Caluclate length of a strng
 * @s: string under consideration
 *
 * Return: length of string
 */
int _strlen(*s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

int _putchar(char c);

unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);
unsigned int flip_bits(unsigned long int n, unsigned long int m);

#endif
