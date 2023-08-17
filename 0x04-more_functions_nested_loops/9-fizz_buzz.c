#include <stdio.h>

/**
 * main - prints integers and fizzbuzz
 *
 * Return: integers
 */

int main(void)
{
	int i;
	char str1[] = "FizzBuzz";
	char str2[] = "Fizz";
	char str3[] = "Buzz";

	i = 1;
	printf("%d", i);

	for (i = 2; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf(" %s", str1);
		}
		else if (i % 5 == 0)
		{
			printf(" %s", str3);
		}
		else if (i % 3 == 0)
		{
			printf(" %s", str2);
		}
		else
		{
			printf(" %d", i);
		}
	}
	return (0);
}
