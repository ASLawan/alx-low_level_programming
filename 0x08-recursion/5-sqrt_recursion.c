#include "main.h"

/**
 * _sqrt_recursion - computes square root of a number
 *
 * @n: number to compute square root for
 *
 * Return: square root if found, -1 if not found
 */


int _sqrt_recursion(int n)
{
	return (sqrtTest(n, 0));
}

/**
 * square - squares numbers
 * @x: number to square
 *
 * Return: squared number;
 */

int square(int x)
{
	return (x * x);
}

/**
 * sqrtTest - tests for natural square root
 * @n: number to check
 * @k: iterator
 *
 * Return: square root
 */

int sqrtTest(int n, int k)
{
	if (square(k) < n)
	{
		return (sqrtTest(n, k + 1));
	}
	else if (square(k) == n)
	{
		return (k);
	}
	else
	{
		return (-1);
	}
}
