#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main - adds positive numbers
 *
 * @argv: arrays of arguments
 * @argc: number of arguments
 *
 * Return: 0 if no argument, 1 if non-alphabet
 * sum if success
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, j = 0;

	if (argc == 1)
	{
		printf("%d\n", j);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!isdigit(*argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
