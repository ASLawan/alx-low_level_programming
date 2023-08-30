#include "main.h"

/**
 * is_prime_number - checks if number is a prime number
 *
 * @n: number to check
 *
 * Return: 1 if number is prime and 0 otherwise
 */

int is_prime_number(int n)
{
	int res;

	if (n < 0)
	{
		res = 0;
	}
	else if (n == 0)
	{
		res = 0;
	}
	else if (n == 1)
	{
		res = 0;
	}
	else
	{
		res = isPrime(n, 2);
	}
	return (res);
}

/**
 * isPrime - checks for prime numbers
 * @i: counter
 * @n: number to check
 *
 * Return: 1 if prime, 0 otherwise
 */

int isPrime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (isPrime(n, (i + 1)));
}
