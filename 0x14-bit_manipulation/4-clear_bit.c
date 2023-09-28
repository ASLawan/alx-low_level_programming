#include "main.h"

/**
 * clear_bit - sets value of bit at given index to 0
 * @n: unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if success, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num_mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	num_mask = ~(1UL << index);
	*n = *n & num_mask;

	return (1);


}
