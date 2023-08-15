#include <stdio.h>

/**
 * main - prints firts 50 fibonacci series numbers
 *
 * Return: fibonacci series
 */

int main(void)
{
int num;
long int first, second, next;

first = 1;
second = 2;
printf("%d, ", first);
printf("%d, ", second);
for (num = 0; num < 48; num++)
{
next = first + second;
printf(", %d", next);
first = second;
second = next;
}
printf("\n");
return (0);
}
