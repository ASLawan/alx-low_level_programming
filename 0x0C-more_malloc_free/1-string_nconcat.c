#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * *string_nconcat - concatenates two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: bytes
 *
 * Return: string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i, new_str_len;
	unsigned int len1 = strlen(s1);
	unsigned int len2 = strlen(s2);

	if (n >= len2)
	{
		n = len2;
	}
	new_str_len = len1 + n;

	new_str = malloc((new_str_len + 1) * sizeof(char));

	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		new_str[len1 + i] = s2[i];
	}
	new_str[new_str_len] = '\0';
	return (new_str);
}
