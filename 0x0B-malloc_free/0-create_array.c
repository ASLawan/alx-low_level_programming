#include "main.h"
#include <stdlib.h>

/**
 * *create_array - prints an array
 * @size: size of array to printed
 * @c: character
 *
 * Return: NULL if size is zero or pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(size * sizeof(c));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
