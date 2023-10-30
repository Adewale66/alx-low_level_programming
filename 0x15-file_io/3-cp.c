#include "main.h"

/**
 * file_from - to open and read file
 * @arg1: pointer to file
 * @ran: pointer to temp buffer
 *
 * Return: pointer to buffer
 */

char *file_from(char *arg1, char *ran)
{
	int ff, cf;
	ssize_t r, tb = 0;

	ff = open(arg1, O_RDONLY);
	if (ff == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	while ((r = read(ff, ran + tb, 1024)) > 0)
	{
		tb = tb + r;
	}
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg1);
		exit(98);
	}
	cf = close(ff);
	if (cf == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ff);
		exit(100);
	}
	return (ran);
}

/**
 * main - copy content of a file to another file
 * @argc: number of arguments
 * @argv: pointer to an array of the arguments
 *
 * Return: 1 if successful, -1 otherwise
 */

int main(int argc, char **argv)
{
	int fd, ct, len;
	ssize_t bytes;
	char *buffer;
	char ran[4096];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = file_from(argv[1], ran);
	fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while (buffer[len])
		len++;

	bytes = write(fd, buffer, len);
	if (bytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	ct = close(fd);
	if (ct == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	return (1);
}
