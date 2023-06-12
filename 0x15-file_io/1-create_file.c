#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer var
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 * if filename is NULL return -1
 * if content NULL create empty file
 *
 * created file must have those permissions: rw-------.
 * If the file already exists, do not change the permissions.
 * if the file already exists, truncate
 */

int create_file(const char *filename, char *text_content)
{
	int f, n, w;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	n = 0;
	while (text_content[n])
	{
		n++;
	}

	f = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600)
	w = write(f, text_content, n);

	if (f < 0)
		return (-1);

	return (1);
}
