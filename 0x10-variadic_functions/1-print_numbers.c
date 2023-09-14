#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 *
 * @separator: number separator
 * @n: number of unnamed arguments
 * @...: unnamed arguments
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(arguments, int));
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(arguments);

	printf("\n");
}
