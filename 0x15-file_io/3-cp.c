#include "main.h"

/**
 * _close - closes file descriptor
 * @fd: file descriptor
 * Return: void
 */
void _close(int fd)
{
	int cls = close(fd);

	if (cls == -1)
	{
		/* cannot close fd */
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @ac: argument count
 * @av: argument vector
 * Return: ...
 *
 * ******************* Description ************************
 * Usage: cp file_from file_to
 * exit(97): number of arguments is not the correct
 * > dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n")
 * If file_to already exists, truncate it
 * exit(98): file_from does not exist, or cannot be read
 * > dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1])
 * exit(99): if you cannot create or write to file_to fails
 * > dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2])
 * exit(100): if you can not close a file descriptor
 * > dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd)
 * Permissions of the created file: rw-rw-r--. 
 * > If the file already exists, do not change the permissions
 * Must read 1,024 bytes at a time from the file_from. Use a buffer
 */
int main(int ac, char *av[])
{
	int from, to, rd, wr;
	char *buf;

	/* number of arguments is not the correct */
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	/* cannot create or write to file_to fails */
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	from = open(av[1], O_RDONLY);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	rd = read(from, buf, 1024);

	while (rd > 0)
	{
		if (from == -1 || rd == -1)
		{
			/* file_from does not exist, or cannot be read */
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buf);
			exit(98);
		}

		wr = write(to, buf, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
                free(buf);
		exit(99);
		}

		rd = read(from, buf, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	}

	free(buf);
	_close(from);
	_close(to);

	return (0);
}
