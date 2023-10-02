#include "main.h"

/**
 * append_text_to_file - adds text to file
 * @filename: file to add text to
 * @text_content: text to add
 * Return: 1 on success and -1 otherwise
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;
	size_t res;

	if (!filename)
	{
		return (-1);
	}

	fptr = fopen(filename, "a");
	if (!fptr)
	{
		return (-1);
	}

	if (text_content)
	{
		res = fwrite(text_content, sizeof(char), strlen(text_content), fptr);
		if (res < strlen(text_content))
		{
			fclose(fptr);
			return (-1);
		}

	}

	fclose(fptr);

	return (1);

}
