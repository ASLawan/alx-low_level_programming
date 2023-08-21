#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords
 * Return: 0 Always.
 */

int main(void)
{
	char ch;
	int sum = 0;

	srand(time(NULL));
	while (sum < 2645)
	{
		ch = rand() % 128;
		sum += ch;
		putchar(ch);
	}
	putchar(2772 - sum);
	return (0);
}
