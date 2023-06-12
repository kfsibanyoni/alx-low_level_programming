#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file;
 *
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 * Do not create the file if it does not exist
 * If filename is NULL return -1
 * If text_content is NULL, do not add anything to the file.
 * 1 if the file exists
 * -1 if the file does not exist
 * or if you do not have the required permissions to write the file
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, n;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	f = open(filename, O_WRONLY | O_APPEND);

	for (n = 0; text_content[n] != '\0'; n++)
		;

	if (f < 0)
		return (-1);

	write(f, text_content, n);

	return (1);
}

