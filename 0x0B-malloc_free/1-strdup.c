#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * *_strdup - returns pointer to copy of string
 *
 * @str: string parameter
 *
 * Return: pointer or NULL
 */

char *_strdup(char *str)
{
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc(strlen(str) + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		strcpy(ptr, str);
	}
	return (ptr);
}
