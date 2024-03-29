/*
 * Lioness
 * Mbugua Wairimu
 */

#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: when function failure or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int j, k, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	j = open(filename, O_WRONLY | O_APPEND);
	k = write(j, text_content, length);

	if (j == -1 || k == -1)
		return (-1);

	close(j);

	return (1);
}
