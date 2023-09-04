#include "main.h"
#include <stdlib.h>

/**
 * **alloc_grid - prints a 2D array
 *
 * @width: widht of array
 * @height: height of array
 *
 * Return: array
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **array;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	array = malloc(width * sizeof(int *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	else
	{
		for (i = 0; i < width; i++)
		{
			array[i] = malloc(height * sizeof(int));
		}
		return (array);
	}
	/*fill the array with zeros*/
	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			array[i][j] = 0;
		}
	}
	/*free up the allocated memory*/
	for (i = 0; i < width; i++)
	{
		free(array[i]);
	}
	free(array);
}
