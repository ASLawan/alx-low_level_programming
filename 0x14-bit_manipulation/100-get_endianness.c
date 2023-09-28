#include "main.h"

/**
 * get_endianness - checks for endianness
 * Return: 0 if big+endian, 1 if little_endian
 */

int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *)&x;

	return ((int)*c);
}
