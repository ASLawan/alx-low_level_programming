#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void rev_string(char *s)
{
	char c;
	int i, len = 0;

	for (i = 0; s[i] != 0; i++)
	{
		len += 1;
	}

	for (i = 0; i < len / 2; i++)
	{
		c = s[i];
		s[i] = s[len - 1 - i];
		s[len  - 1 - i] = c;
	}

}
