#include "main.h"

/**
 * read_textfile - reads textfile and prints to stdout
 * @filename: textfile to read from
 * @letters: letters to read and print
 * Return: numbe of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t letters_rd, letters_ptd;
	char *buffer;
	int fides;

	if (filename == NULL)
	{
		return (0);
	}
	fides = open(filename, O_RDONLY);
	if (fides == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		return (0);
	}
	letters_rd = read(fides, buffer, letters);
	if (letters_rd == -1)
	{
		return (0);
	}
	letters_ptd = write(STDOUT_FILENO, buffer, letters_rd);
	if (letters_ptd == -1 || letters_ptd != letters_rd)
	{
		return (0);
	}

	free(buffer);
	close(fides);

	return (letters_ptd);
}
