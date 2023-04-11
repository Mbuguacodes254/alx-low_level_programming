/*
 * Lioness
 * Auth: Mbugua Wairimu
 */

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads text file and prints to POSIX stdout.
 * @filename: Pointer to file name.
 * @letters: The number of letters the
 *           function ought to print and read.
 *
 * Return: upon failure of function or Null Filename - 0.
 *         Upon success - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, m, n;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	m = read(o, buffer, letters);
	n = write(STDOUT_FILENO, buffer, m);

	if (o == -1 || m == -1 || n == -1 || n != m)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (m);
}
