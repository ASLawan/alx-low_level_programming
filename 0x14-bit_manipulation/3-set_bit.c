#include "main.h"

/**
 * set_bit - sets value of bit at given index
 * @n: unsigned long int
 * @index: index to set bit at
 *
 * Return: 1 if success and -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8 - 1)
	{
		return (-1);
	}

	/*shift 1 to the left by index and perform bitwise OR with n*/
	*n = *n | (1UL << index);

	return (1);
}
