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
	int i = 0;
	char *str, *s = "";
	va_list list;

	va_start(list, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
					{
						str = "(nil)";
					}
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(list);
}
