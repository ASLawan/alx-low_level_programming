#include "main.h"

/**
 * _strlen - computes length of string
 *
 * @s: string whose length is to be completed
 *
 * Return: returns a number
 */

int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count += 1;
	}
	return (count);
}
