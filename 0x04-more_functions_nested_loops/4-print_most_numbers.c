#include "main.h"

/**
 * print_most_numbers - prints 0 to 9 but not 2 and 4
 *
 * Return: numbers
 */

void print_most_numbers(void)
{
	char i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
