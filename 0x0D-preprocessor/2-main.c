#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Use FILE macro */
	printf("%s\n", __FILE__);
	return (0);
}
