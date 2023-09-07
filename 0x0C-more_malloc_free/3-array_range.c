#include "main.h"
#include <stdlib.h>

/**
 * *array_range - create an array of integers
 *
 * @min: lower limit
 * @max: upper limit
 *
 * Return: pointer to address if success, NULL if failure
 */

int *array_range(int min, int max)
{
	int *array_ptr, i;
	int elements;

	if (min > max)
	{
		return (NULL);
	}

	elements = max - min + 1;

	array_ptr = malloc(elements * sizeof(int));

	if (array_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < elements; i++)
	{
		array_ptr[i] = min + i;
	}

	return (array_ptr);
}
