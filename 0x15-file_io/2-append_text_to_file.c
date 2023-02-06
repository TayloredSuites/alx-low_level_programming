#include "main.h"

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
	if (text_content == NULL)
	{
		return (-1);
	}
	/* flags to onlyuse existing file, append text_content */
	opener = open(filename, O_WRONLY | O_APPEND | 0_TRUNC);
	writer = write(opener, text_content, _strlen(text_content));
	/* Only writes, only append, no creation, truncate if opener is 1 */
	if (opener == -1 || writer == -1)
	{
		return (-1);
	}
	close(opener);
	return (1);
	/* Return for all conditoons met as a succcess */
}
