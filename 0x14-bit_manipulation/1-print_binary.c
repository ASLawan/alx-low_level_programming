#include "main.h"

/**
 * print_binary - prints binary number
 * @n: number to convert to binary
 *
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i;
	int flag = 0;

	for (i = 1UL << 63; i > 0; i = i >> 1)
	{
		if (n & i)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
	}
	if (!flag)
	{
		_putchar('0');
	}
}
