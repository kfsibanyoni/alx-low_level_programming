#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: where filename is the name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, wr, len;

	/* If filename is NULL return -1 */
	if (!filename)
		return (-1);

	fd = open(filename, O_APPEND | O_RDWR, 0664);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		wr = write(fd, text_content, len);
		if (wr < 0)
			return (-1);
	}
	close(fd);
	return (1);
}
