#include "holberton.h"
/**
 * append_text_to_file - creates a file with content
 * @filename: File to create
 * @text_content: Content to insert in the file
 * Return: -1 or 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int i = 0;
	int written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (!text_content)
		return (1);

	while (text_content[i])
		i++;

	written = write(fd, text_content, i);
	if (written == -1 || written != i)
		return (-1);

	close(fd);

	return (1);

}
