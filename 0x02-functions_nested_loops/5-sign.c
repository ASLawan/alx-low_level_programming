#include "main.h"

/**
 * print_sign - checks sign of a given number
 *
 * @n: number to be checked
 *
 * Return: 1 for positive numbers, 0 for zero and
 * -1 for negative numbers
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
