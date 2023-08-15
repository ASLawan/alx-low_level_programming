#include "main.h"

/**
 * main - function to print '_putchar'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, size;
	char letters[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};

	size = sizeof(letters);
	for (i = 0; i < size; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
	return (0);
}
