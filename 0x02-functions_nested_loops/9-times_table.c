#include "main.h"

/**
 * times_table - prints the 9 times table starting at 0
 *
 * Return: 9 times table
 */

void times_table(void)
{
	int i, j, multiple;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			multiple = i * j;
			_putchar(44);
			_putchar(32);
			if (multiple <= 9)
			{
				_putchar(32);
				_putchar(multiple + 48);
			}
			else
			{
				_putchar((multiple / 10) + 48);
				_putchar((multiple % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
