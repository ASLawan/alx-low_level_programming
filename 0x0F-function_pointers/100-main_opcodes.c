#include <stdio.h>
#include <stdlib.h>

/**
 * main - program entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: opcodes of main function
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	unsigned char *func_ptr = (unsigned char *)main;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x ", func_ptr[i]);
	}
	printf("\n");

	return (0);
}
