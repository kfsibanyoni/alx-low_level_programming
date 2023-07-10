#include "main.h"

/**
 * main - copies one file into another
 * @ac: argument count
 * @av: argument vector
 * Return: copied file
 */
int main(int ac, char **av)
{
	int f1, f2, rd;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	f1 = open(av[1], O_RDONLY);
	if (f1 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	f2 = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	rd = read(f1, buffer, 1024);
	while (rd > 0)
	{
		if (write(f2, buffer, rd) != rd || f2 < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
		if (rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1);
			exit(100);
		}
		if (close(f2) < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2);
			exit(100);
		}
	}
	return (0);
}
