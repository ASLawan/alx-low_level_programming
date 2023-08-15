#include <stdio.h>

/**
 * main - Prints natural numbers below 1024 that are
 * multiplies of 3 or 5
 *
 * Return: Always 0.
 */

int main(void)
{
	int count, sum = 0;

	for (count = 1; count < 1024; count++)
	{
		if ((count % 3) == 0 || (count % 5) == 0)
		{
			sum += count;
		}
	}
	printf("%d\n", sum);
	return (0);
}
