#include "main.h"

/**
 * *_strncpy - copy one string to another upto n buytes
 *
 * @dest: string to copy to
 * @src: string to be copied
 * @n: bytes to copy
 *
 * Return: copied string upto n bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
