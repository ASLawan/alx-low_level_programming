#include "search_algos.h"
/**
 * binary_search - searches given value using binary search algorithm
 * @array: array to be searched
 * @size: size of the array
 * @value: target value
 * Return: target value on success or -1 otherwise
 */

int binary_search(int *array, size_t size, int value)
{

	size_t left = 0;
	size_t right = size - 1;
	size_t i = 0;
	
	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		int mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d", array[i]);
		}
		printf("\n");

		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] < value)
		{
			left = mid + 1;
		}
		else
		{
			right = mid - 1;
		}

	}
	return (-1);
}
