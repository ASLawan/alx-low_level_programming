#include "main.h"

/**
 * flip_bits - returns number of bits to be flipped
 * @n: first number
 * @m: second number
 * Return: number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	unsigned long int count = 0;
	/*check where the two numbers are different indicated by 1s*/
	temp = n ^ m;
	/*loop through and count number of 1s*/
	while (temp > 0)
	{
		count += temp & 1;
		temp >>= 1;
	}

	return (count);
}
