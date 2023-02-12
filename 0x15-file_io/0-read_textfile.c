#include "main.h"

/**
 * read_textfile -  reads a text file and prints to the POSIX standard output
 * @filename: pointer to the filename in HD
 * @letters: no of letters to read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t opener, reader, writer;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	/* Actual size of mem used */
	if (buf == NULL)
	{
		return (0);
	}
	opener = open(filename, O_RDONLY);
	reader = read(opener, buf, letters);
	writer = write(STDOUT_FILENO, buf, letters);
	if (opener == -1 || reader == -1 || writer == -1 || reader != writer)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(opener);
	return (writer);
}
