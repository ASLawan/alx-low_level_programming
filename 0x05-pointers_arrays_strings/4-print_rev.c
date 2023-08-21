#include "main.h"

/**
 * print_rev - reverses a string
 *
 * @s: string to be reversed
 *
 * Return: reversed string
 */

void print_rev(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len += 1;
	}

	for (i = len; i >= 1; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
