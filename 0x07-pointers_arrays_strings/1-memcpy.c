#include "main.h"

/**
 * *_memcpy - copies memory area between two spots
 *
 * @dest: area to copy to
 * @src: area to copy from
 * @n: number of bytes to copy
 *
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
