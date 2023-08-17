#include "main.h"

/**
 * print_line - prints a line in the terminal
 *
 * @n: length of line ot printed
 *
 * Return: returns a line
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			_putchar(95);
			i++;
		}
		_putchar('\n');
	}
}
