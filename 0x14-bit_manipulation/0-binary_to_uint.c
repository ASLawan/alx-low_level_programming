#include "main.h"


/**
 * power - computes power of a number
 * @base: base number
 * @expo: exponent number
 * Return: power of number
 */

unsigned int power(unsigned int base, unsigned int expo)
{
	unsigned int res = 0;

	if (expo != 0)
	{
		res += (base * (power(base, expo - 1)));
	}
	else
	{
		res += 1;
	}

	return (res);
}
/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to binary number
 *
 * Return: unsigned int or 0 if b is NULL
 * or character not 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint  = 0;
	unsigned int base = 2, len = 0, i;

	if (!b)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
		{
			uint += power(base, len - i - 1);
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}
	return (uint);
}
