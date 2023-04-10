/*
 * Lioness
 * Auth: Mbugua Wairimu
 */

#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: Upon function failure - -1.
 *         Upon success - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int m, n, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(m, text_content, length);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}
