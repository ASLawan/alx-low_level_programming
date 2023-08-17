#include "main.h"

/**
 * print_diagonal - prints diagonal line in the terminal
 *
 * @n: line ot be printed
 *
 * Return: line
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		i = 0;
		while (i < n)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
			i++;
		}
		_putchar('\n');
	}
}
