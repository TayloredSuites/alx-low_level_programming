#include "main.h"

/**
 * _strlen - a function that returns the length of a text
 * @s: string under consideration
 *
 * Return: Always 0 (Success)
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
 * create_file - a function that creates a file
 * @filename: pointer to filename or path
 * @text_content: content to be added to created file
 *
 * Return: an integer like open, 1 success, -1 failure or write fails
 */
int create_file(const char *filename, char *text_content)
{
	int opener, writer, creator_mode;

	if (filename == NULL)
	{
		return (-1);
	}
	creator_mode = (S_IWUSR | S_IRUSR);
	/* www.gnu.org/software/libc/manual/html_node/Permission-Bits.html */
	opener = open(filename, O_WRONLY | O_CREAT | O_TRUNC, creator_mode);
	/* If opener is -1 then return -1 */
	writer = write(opener, text_content, _strlen(text_content));
	/* Create case for null text content where writer wont work */
	if (text_content == NULL)
	{
		return (-1);
		/* close(opener); If null, close the whole thing */
	}
	/* If either file use overall returned an error, send error msg */
	if (opener == -1 || writer == -1)
	{
		return (-1);
	}
	close(opener);
	return (1); /* Or Success */
}
