#include <stdio.h>

/**
 * main - Prints sum of even numbers of
 * fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int first, second, next, sum;

	first = 1;
	second = 2;
	next = sum = 0;
	while (next <= 4000000)
	{
		next = first + second;
		first = second;
		second = next;
		if ((first % 2) == 0)
		{
			sum += first;
		}
	}
	printf("%ld\n", sum);
	return (0);
}
