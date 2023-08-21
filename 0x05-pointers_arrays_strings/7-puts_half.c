#include "main.h"

/**
 * puts_half - prints second half of the string
 *
 * @str: string to be printed
 *
 * Return: second half of string
 */

void puts_half(char *str)
{
	int i, n, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len += 1;
	}

	if (len % 2 == 0)
	{
		n = len / 2;
		for (i = n; i < len; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		n = (len - 1) / 2;
		for (i = n; i < len - 1; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
