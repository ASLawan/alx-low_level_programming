#include "main.h"

/**
 * create_file - creates and writes to a file
 * @filename: name of file to be created
 * @text_content: text to write to file
 * Return: 1 on success and -1 otherwise
 */

int create_file(const char *filename, char *text_content)
{
	FILE *fptr;


	if (filename == NULL)
	{
		return (-1);
	}
	fptr = fopen(filename, "w");

	if (fptr == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		fwrite(text_content, sizeof(char), strlen(text_content), fptr);
	}

	fclose(fptr);

	return (1);
}
