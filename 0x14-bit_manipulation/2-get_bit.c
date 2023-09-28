#include "main.h"

/**
 * get_bit - prints value of bit at given index
 * @n: unsigned long int
 * @index: index to print from
 *
 * Return: value of bit at index of success
 * or -1 otherwise
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
