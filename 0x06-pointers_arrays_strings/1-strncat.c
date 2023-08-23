#include "main.h"

/**
 * *_strncat - concatenates two string upto a given bytes
 *
 * @src: string to concatenate with
 * @dest: string to concatenate
 * @n: bytes to contenate
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0, i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len1 += 1;
	}

	for (j = 0; j < n; j++)
	{
		dest[len1 + j] = src[j];
		if (src[j] == '\0')
		{
			break;
		}
	}
	return (dest);
}
