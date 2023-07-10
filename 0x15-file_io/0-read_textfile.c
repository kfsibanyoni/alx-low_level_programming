#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: pointer to file
 * @letters: number of letters to read and print
 * Return: actual number of letters it could read and print
 * 0: if the file can not be opened or read
 * or NULL
 * or write fails or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = 0, er = 0, rd = 0;
	char *buffer;

	if (filename == NULL || !letters)
		return (0);
	
	fd = open(filename, O_RDONLY);
	if (fd < 0)	/* some error occurs */
		return (0);

	/* allocate memory */
	buffer = malloc(sizeof(char) * letters + 1);
	if (buffer == NULL)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd < 0)
	{
		free(buffer);
		return (0);
	}
	buffer[letters] = '\0';
	
	er = write(STDOUT_FILENO, buffer, rd);
	if (er <= 0)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (rd);
}
