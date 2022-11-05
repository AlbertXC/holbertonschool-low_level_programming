#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, k;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file_d = open(filename, O_APPEND | O_WRONLY);
	if (file_d == -1)
		return (-1);

	for (k = 0; text_content[k] != '\0'; k++)
	{
		if (write(fd, &text_content[k], 1) == -1)
		{
			close(file_d);
			return (-1);
		}
	}
		close(file_d);
		return (1);
}
