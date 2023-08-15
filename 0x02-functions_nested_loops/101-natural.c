#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
int num = 1024, n = 0, sum = 0;

while (n < num)
{
if ((n % 5) == 0 || (n % 3) == 0)
{
sum += n;
}
n++;
}
printf("%d", sum);
return (0);
}
