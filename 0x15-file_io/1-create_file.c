#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success
 * -1 on failure
 *
 * Descriptions: The created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * If the file already exists, truncate it,
 * If filename is NULL return -1
 * If text_content is NULL create an empty file
 */
int create_file(const char *filename, char *text_content)
{
	int fd, wr, n;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd < 0)
		return (-1);
	if (text_content != NULL)
	{
		for (n = 0; text_content[n]; n++)
			;
		wr = write(fd, text_content, n);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
