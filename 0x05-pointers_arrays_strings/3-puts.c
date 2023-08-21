#include "main.h"

/**
 * _puts - prints string followed by newline
 *
 * @str: string to be printed
 *
 * Return: Always 0
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}
