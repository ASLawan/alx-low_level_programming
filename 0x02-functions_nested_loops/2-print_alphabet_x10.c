#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase,10 times.
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int i = 0, count = 10;
	char j;

	while (i < count)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	i++;
	}
}
