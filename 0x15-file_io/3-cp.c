#include "main.h"

/**
 * _strlen - functon that returns length of text
 * @s: string under consideration
 *
 * Return: Always 0 (Sucess)
 */
int _strlen(char *s)
{
	int len;

	for (len = 0; *s != '\0'; s++)
	{
		len++;
	}
	return (len);
}

/**
 * main - Entry point
 * @argc: No of command line args
 * @argv: List of command line args used up to argc
 *
 * Return: 1 for success, -1 for failure
 */
int main(int argc, char *argv[])
{
	int opener_to, writer_to, p_arg = 3; /* Actual PIDargcv */
	char *filename[];
	char *text[1024];
	
	
	if (argc != p_arg)
	{
		dprintf("Usage: cp file_from file_to\n");
		exit(97);
	}
	/* Create the file_to for appending */
	text_buff = (int *)malloc(sizeof(text) * _strlen(text));
	fn_buff = ,(int *)malloc(sizeof(filename) * _strlen(filename));
	opener_to = open(fn_buff, O_WRONLY | O_APPEND | O_TRUNC);
	writer_to = write(opener_to, text_buff, _strlen(text));
	if (opener_to == -1 || writer_to == -1)
	{
		return (-1);
	}
	close(opener_to);
	return (1);
}
