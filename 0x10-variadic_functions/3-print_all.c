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
	va_list args;
	const char *p = format;
	char c;
	int i;
	double f;
	char *s;

	va_start(args, format);
	while (*p)
	{
		switch (*p++)
		{
			case 'c':
				c = (char) va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(args, int);
				printf("%d", i);
				break;
			case 'f':
				f = va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					printf("(nil)");
				}
				printf("%s", s);
				break;
		}
		if ((*p == 'c' || *p == 'i' || *p == 'f' || *p == 's') && (*p != '\0'))
			printf(", ");
	}
	printf("\n");
	va_end(args);
}
