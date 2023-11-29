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
 * append_text_to_file - function that appends text at the end of a file
 * @filename: pointer to filename aka path
 * @text_content: content to be appended
 *
 * Return: 1 for success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int opener, writer;

	if (filename == NULL)
	{
		return (-1);
	}
	/* flags to onlyuse existing file, append text_content */
	opener = open(filename, O_WRONLY | O_APPEND);
	/* Removing trunc as it isnt a new file */
	writer = write(opener, text_content, _strlen(text_content));
	/* IF text_content is NULL return 1 as exists */
	if (text_content == NULL)
	{
		return (1);
	}
	/* Only writes, only append, no creation, truncate if opener is 1 */
	if (opener == -1 || writer == -1)
	{
		return (-1);
	}
	close(opener);
	return (1);
	/* Return for all conditoons met as a succcess */
}
