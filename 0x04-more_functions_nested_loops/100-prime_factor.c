#include <stdio.h>

/**
 * main - prints prime factors
 *
 * Return: prime factor
 */

int main(void)
{
	long int n, pf;
	/*pf = prime factor*/

	n = 612852475143;

	for (pf = 2; pf <= n; pf++)
	{
		if (n % pf == 0)
		{
			n /= pf;
			pf--;
		}
	}
	printf("%ld\n", pf);
	return (0);
}
