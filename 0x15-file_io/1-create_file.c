#include "main.h"

/**
 * create_file - creates and writes to a file
 * @filename: name of file to be created
 * @text_content: text to write to file
 * Return: 1 on success and -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	int fides;

	if (filename == NULL)
	{
		return (-1);
	}

	fides = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fides == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fides);
		return (1);
	}
	if (write(fides, text_content, strlen(text_content)) == -1)
	{
		close(fides);
		return (-1);
	}

	close(fides);
	return (1);
}
