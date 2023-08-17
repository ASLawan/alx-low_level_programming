#include "main.h"

/**
 * more_numbers - prints 0 to 14 ten times
 *
 * Return: numbers
 */

void more_numbers(void)
{
int n, i;

n = 0;
while (n < 10)
{
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar((i / 10) + 48);
}
_putchar((i % 10 + 48));
}
n++;
_putchar('\n');
}
}
