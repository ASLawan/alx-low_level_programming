#include "main.h"

/**
 * print_times_table - print n times table
 *
 * @n: table value to be printed
 *
 * Return: returns a times table
 */

void print_times_table(int n)
{
	int i, j, multiple;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				multiple = i * j;
				_putchar(44);
				_putchar(32);
				if (multiple <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(multiple + 48);
				}
				else if (multiple <= 99)
				{
					_putchar(32);
					_putchar((multiple / 10) + 48);
					_putchar((multiple % 10) + 48);
				}
				else
				{
					_putchar(((multiple / 100) % 10) + 48);
					_putchar(((multiple / 10) % 10) + 48);
					_putchar((multiple % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
