#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 *
 * @format: type of argument passed
 * @...: unnamed arguments
 *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	int i = 0, num;
	char *str, letter;
	double decimal;
	va_list arguments;

	va_start(arguments, format);
	while (format[i])
	{
		switch (format[i++])
		{
			case 'c':
				letter = (char) va_arg(arguments, int);
				printf("%c", letter);
				break;
			case 'i':
				num = va_arg(arguments, int);
				printf("%d", num);
				break;
			case 's':
				str = va_arg(arguments, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
				else
				{
					printf("%s", str);
				}
				break;
			case 'f':
				decimal = va_arg(arguments, double);
				printf("%f", decimal);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's') && (format[i] != '\0'))
		{
			printf(", ");
		}
	}
	va_end(arguments);
	printf("\n");
}
