#include "main.h"

/**
 * print_number - prints a number with _putchar
 *
 * @n: number to be printed
 *
 * Return: number
 */

void print_number(int n)
{
	unsigned int value = n;

	if (n < 0)
	{
		_putchar('-');
		value = -value;
	}
	if ((value / 10) > 0)
		print_number(value / 10);
	_putchar((value % 10) + '0');
}
