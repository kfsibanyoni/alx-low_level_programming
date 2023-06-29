#include "main.h"

/**
 *
 */
static void w_cpy(char *file, int fd, char *buffer, int n)
{
	if (fd < 0 || !buffer)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	if (write(fd, buffer, n) < 0)
	{
		free(buffer);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
}

/**
 *
 */
static ssize_t rd_file(char *file, char **buffer, int fd)
{
	int n;

	if (fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}

	if (*buffer == NULL)
		*buffer = malloc(sizeof(char) * 1024);
	
	if (*buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	
	n = read(fd, *buffer, 1024);
	if (n < 0)
	{
		free(*buffer);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		exit(98);
	}
	return (n);
}

/**
 * main - copies the content of a file to another file
 *
 * @ac: ...
 * @av: ...
 *
 * Return: ...
 */
int main(int argc, char **argv)
{
	char *buffer, *from, *to;
	int f0, f1, n, error;

	buffer = NULL;
	n = 1;
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from = argv[1];
	f0 = open(from, O_RDONLY);
	to = argv[2];
	f1 = open(to, O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (n > 0)
	{
/*		n = rd_file(from, &buffer, f0);*/
		if (!n)
			break;

		/* write buffer to file_to */
		w_cpy(to, f1, buffer, n);
	}
	free(buffer);

	error = close(f0);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f0);
		exit(100);
	}

	error = close(f1);
	if (error < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
		exit(100);
	}
	return (0);
}
