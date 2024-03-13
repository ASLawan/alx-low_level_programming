#include "search_algos.h"
/**
 * linear_search - searches for given value in a given array
 * @array: array to be checked
 * @size: size of the array
 * @value: target value
 * Return: value on success or -1 otherwise
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
