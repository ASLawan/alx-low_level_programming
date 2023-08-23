#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: string one
 * @s2: string two
 *
 * Return: integer value
 */

int _strcmp(char *s1, char *s2)
{
	int result, i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			result = s1[i] - s2[i];
			break;
		}
		else
		{
			result = 0;
		}
	}
	return (result);
}
