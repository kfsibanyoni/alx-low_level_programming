#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename: filename
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 * 0 if file can not be opened or read
 * or filename == NULL
 * or if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int on, rd, we;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters);
	if (buff == NULL)
		return (0);

	on = open(filename, O_RDONLY);
	/* fd negative file does not open */
	if (on < 0)
	{
		free(buff);
		return (0);
	}

	/* read */
	rd = read(on, buff, letters);
	/* write */
	we = write(STDOUT_FILENO, buff, rd);

	close(on);

	return (we);
}
