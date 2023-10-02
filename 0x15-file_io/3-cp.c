#include "main.h"

/**
 * main - program to copy from one file to another
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: new file on success
 */
#define BUFFER 1024
int main(int argc, char *argv[])
{
	int s_fd, d_fd, bytes_rd, bytes_ptd;
	char buffer[BUFFER];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	s_fd = open(argv[1], O_RDONLY);
	if (s_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	d_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (d_fd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((bytes_rd = read(s_fd, buffer, BUFFER)) > 0)
	{
		bytes_ptd = write(d_fd, buffer, bytes_rd);
		if (bytes_ptd != bytes_rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(s_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", s_fd);
		exit(100);
	}
	if (close(d_fd) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", d_fd);
		exit(100);
	}
	return (0);
}
